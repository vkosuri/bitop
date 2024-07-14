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
DEPS = bitops.h

# Object files
OBJ = bitops.o

# Rule to generate object files from source files
# $@ is the target (object file)
# $< is the first prerequisite (source file)
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# Rule to build the final executable from object files
# $@ is the target (executable)
# $^ is all prerequisites (object files)
bitops: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

# Rule to build the static library
libbitops.a: $(OBJ)
	ar rcs $@ $^

# Rule to build the shared library
libbitops.so: $(OBJ)
	$(CC) -shared -o $@ $^ $(CFLAGS)

# Rule to build the test executable
test_bitops: test_bitop.o $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

# Rule to run tests
run_tests: test_bitops
	./test_bitops

# Rule to clean the build directory
clean:
	rm -rf *.o bitops libbitops.a libbitops.so test_bitops

# Phony targets
.PHONY: all clean static shared test run_tests

# Rule to build everything
all: bitop static shared test

# Rule to build only the static library
static: libbitops.a

# Rule to build only the shared library
shared: libbitops.so

