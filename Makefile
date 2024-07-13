# Makefile
#
# Copyright (c) 2024 vkosuri <malli.kv2@gmail.com>
#
# License: MIT LICENSE, see file in root directory

# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=gnu99 -O2

# Header files
DEPS = bitop.h

# Object files
OBJ = bitop.o

# Rule to generate object files from source files
# $@ is the target (object file)
# $< is the first prerequisite (source file)
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# Rule to build the final executable from object files
# $@ is the target (executable)
# $^ is all prerequisites (object files)
bitop: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

# Rule to build the static library
libbitop.a: $(OBJ)
	ar rcs $@ $^

# Rule to build the shared library
libbitop.so: $(OBJ)
	$(CC) -shared -o $@ $^ $(CFLAGS)

# Rule to build the test executable
test_bitop: test_bitop.o $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

# Rule to run tests
run_tests: test_bitop
	./test_bitop

# Rule to clean the build directory
clean:
	rm -rf *.o bitop libbitop.a libbitop.so test_bitop

# Phony targets
.PHONY: all clean static shared test run_tests

# Rule to build everything
all: bitop static shared test

# Rule to build only the static library
static: libbitop.a

# Rule to build only the shared library
shared: libbitop.so

