BIN				:= chatbot
CXX				:= g++
CXXFLAGS	:= -c -Wall
CXXFLAGS	+= -I./src

all:
	$(CXX) src/main.cpp -o main.o $(CXXFLAGS)
	$(CXX) src/Output.cpp -o Output.o $(CXXFLAGS)
	$(CXX) main.o Output.o -o $(BIN)
clean:
	rm -f *~ *.o
