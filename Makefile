CXXFLAGS = -std=c++11 -pedantic -Werror -Wall -I. -g
CXX = g++
OBJDIR = obj

.PHONY: directories

run: directories $(OBJDIR)/main.o $(OBJDIR)/AustraliaFlag.o $(OBJDIR)/ChileFlag.o $(OBJDIR)/AustraliaMap.o $(OBJDIR)/ChileMap.o $(OBJDIR)/factoryFlag.o $(OBJDIR)/factoryMap.o $(OBJDIR)/ChileFactory.o $(OBJDIR)/AustraliaFactory.o $(OBJDIR)/FactoryCountry.o
	$(CXX) $(CXXFLAGS) -o run $(OBJDIR)/main.o $(OBJDIR)/AustraliaFlag.o $(OBJDIR)/ChileFlag.o $(OBJDIR)/AustraliaMap.o $(OBJDIR)/ChileMap.o $(OBJDIR)/factoryFlag.o $(OBJDIR)/factoryMap.o $(OBJDIR)/ChileFactory.o $(OBJDIR)/AustraliaFactory.o $(OBJDIR)/FactoryCountry.o

directories:
	mkdir -p $(OBJDIR)

$(OBJDIR)/main.o: app/main.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OBJDIR)/%.o: abstract/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OBJDIR)/%.o: f1/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OBJDIR)/%.o: f2/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJDIR) run
