# Compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Output file
TARGET = store

# Source file
SRC = main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
