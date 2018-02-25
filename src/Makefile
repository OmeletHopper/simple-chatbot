BIN				:= chatbot
CXX				:= g++
CXXFLAGS	:= -c -Wall
CXXFLAGS	+= -I./ -I/usr/local/opt/json-c/include/json-c/

all:
	$(CXX) main.cpp -o main.o $(CXXFLAGS)
	$(CXX) Output.cpp -o Output.o $(CXXFLAGS)
	$(CXX) main.o Output.o -o $(BIN)
clean:
	rm -f *~ *.o
