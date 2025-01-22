# Compiler and flags
CXX = clang++
CXXFLAGS = -std=c++11 -Wall

# Target executable
TARGET = 018-Longest-Even-Odd-Subarray

# Source files
SRCS =  018-Longest-Even-Odd-Subarray.cpp

# Build target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean up
clean:
	rm -f $(TARGET)


