CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic -Wshadow -Wformat=2 -Wcast-align -Wconversion -Wsign-conversion -Wnull-dereference -g3 -O0
OBJS=main.o exercicios/ex1.o exercicios/ex2.o exercicios/ex3.o

.PHONY = all clean run

all: $(OBJS)
	mkdir -p build
	$(CXX) $(CXXFLAGS) $^ -o build/out

$(OBJS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@

build/out: $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o build/out

run: build/out
	build/out

clean:
	find . -type f -name "*.o" -delete
	rm -rf build/
