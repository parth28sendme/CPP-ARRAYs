# Compiler and flags
CXX = clang++
CXXFLAGS = -std=c++11 -Wall

# Target executable
TARGET = 019-Maximum-Circular-Sum-Subarray

# Source files
SRCS =  019-Maximum-Circular-Sum-Subarray.cpp

# Build target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean up
clean:
	rm -f $(TARGET)


