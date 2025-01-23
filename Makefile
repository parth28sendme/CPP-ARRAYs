# Compiler and flags
CXX = clang++
CXXFLAGS = -std=c++11 -Wall

# Target executable
TARGET = 021-Minimum-Consecutive-Flips

# Source files
SRCS =  021-Minimum-Consecutive-Flips.cpp

# Build target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean up
clean:
	rm -f $(TARGET)


