# variable definitions

# set the compiler to gcc for c++
CC = g++

# set compiler version to C++17
VERSION = c++17

# command line flags
# -g adds debugging output
# -O0 makes it compile the fastest, but run the slowest
# -Wpedantic gives lots of warnings
# -std$(VERSION) sets the version to VERSION which is defined above
CFLAGS = -g -O0 -Wpedantic --std=$(VERSION)

# target executable
TARGET = addNumbers

# source cpp files
SOURCES = main.cpp getIntFromUser.cpp add.cpp

# actual code

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

clean:
	$(RM) $(TARGET)
