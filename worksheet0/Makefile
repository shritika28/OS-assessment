CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

SRC = array.cpp file.cpp function.cpp hello-world.cpp printarray.cpp swap.cpp variablepointer.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = worksheet0

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

hello: hello-world.cpp
	$(CXX) $(CXXFLAGS) -o hello hello-world.cpp

array: array.cpp
	$(CXX) $(CXXFLAGS) -o array array.cpp

file: file.cpp
	$(CXX) $(CXXFLAGS) -o file file.cpp

function: function.cpp
	$(CXX) $(CXXFLAGS) -o function function.cpp

printarray: printarray.cpp
	$(CXX) $(CXXFLAGS) -o printarray printarray.cpp

swap: swap.cpp
	$(CXX) $(CXXFLAGS) -o swap swap.cpp

variablepointer: variablepointer.cpp
	$(CXX) $(CXXFLAGS) -o variablepointer variablepointer.cpp

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET) hello array file function printarray swap variablepointer
