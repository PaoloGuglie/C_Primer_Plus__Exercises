# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11 -g

# Source files
SRCS = parta.c partb.c

# Executable name
TARGET = program

# Default target
all: $(TARGET)

# Compile and link in one step
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $(SRCS)

# Clean executable
clean:
	rm -f $(TARGET)

.PHONY: all clean
