# Makefile
#
# Copyright (c) 2024 Mallikarjunarao Kosuri
#
# MIT License
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=gnu99 -O2 -arch arm64 -arch x86_64

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

