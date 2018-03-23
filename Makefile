CXXFLAGS = -std=c++11 -pedantic -Werror -Wall -I. -g
CXX = g++
OBJDIR = obj

.PHONY: directories

run: directories $(OBJDIR)/main.o $(OBJDIR)/ProductFlagAustralia.o $(OBJDIR)/ProductFlagChile.o $(OBJDIR)/ProductMapAustralia.o $(OBJDIR)/ProductMapChile.o $(OBJDIR)/ConcreteFactoryChile.o $(OBJDIR)/ConcreteFactoryAustralia.o
	$(CXX) $(CXXFLAGS) -o run $(OBJDIR)/main.o $(OBJDIR)/ProductFlagAustralia.o $(OBJDIR)/ProductFlagChile.o $(OBJDIR)/ProductMapAustralia.o $(OBJDIR)/ProductMapChile.o $(OBJDIR)/ConcreteFactoryChile.o $(OBJDIR)/ConcreteFactoryAustralia.o

directories:
	mkdir -p $(OBJDIR)

$(OBJDIR)/main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OBJDIR)/%.o: Factory/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OBJDIR)/%.o: ProductFlag/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OBJDIR)/%.o: ProductMap/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJDIR) run
