# Compiler and flags
CXX = clang++
CXXFLAGS = -std=c++11 -Wall

# Target executable
TARGET = Sorting-Check

# Source files
SRCS = Sorting-Check.cpp

# Build target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean up
clean:
	rm -f $(TARGET)


