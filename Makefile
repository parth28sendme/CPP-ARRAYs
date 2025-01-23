# Compiler and flags
CXX = clang++
CXXFLAGS = -std=c++11 -Wall

# Target executable
TARGET = 020-Majority-Element

# Source files
SRCS =  020-Majority-Element.cpp

# Build target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean up
clean:
	rm -f $(TARGET)


