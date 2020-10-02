CXX=g++
CXXFLAGS=-g    #CXXFLAGS=-std=c++17
#SANITFLAGS=
VALGRINDFLAGS=--tool=memcheck --leak-check=full --track-origins=yes

all: 2.x

%.x: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

valgrind: 2.x
	valgrind $(VALGRINDFLAGS) ./$<

clean:
	rm -rf *.x a.out *.x.*
