/*
 * test_bitop.c
 * 
 * Copyright (c) 2024 Mallikarjunarao Kosuri
 * 
 * MIT License
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "bitop.h"
#include <stdio.h>

void test_set_bit() {
    printf("Test set_bit:\n");
    printf("set_bit(0b00000000, 2) = 0b%s (Expected: 0b00000100)\n", format_binary(set_bit(0b00000000, 2)));
    printf("set_bit(0b00001100, 3) = 0b%s (Expected: 0b00001100)\n", format_binary(set_bit(0b00001100, 3)));
}

void test_clear_bit() {
    printf("Test clear_bit:\n");
    printf("clear_bit(0b00001100, 2) = 0b%s (Expected: 0b00001000)\n", format_binary(clear_bit(0b00001100, 2)));
    printf("clear_bit(0b00001100, 3) = 0b%s (Expected: 0b00000100)\n", format_binary(clear_bit(0b00001100, 3)));
}

void test_toggle_bit() {
    printf("Test toggle_bit:\n");
    printf("toggle_bit(0b00001100, 2) = 0b%s (Expected: 0b00001000)\n", format_binary(toggle_bit(0b00001100, 2)));
    printf("toggle_bit(0b00001100, 1) = 0b%s (Expected: 0b00001110)\n", format_binary(toggle_bit(0b00001100, 1)));
}

void test_get_bit_status() {
    printf("Test get_bit_status:\n");
    printf("get_bit_status(0b00001100, 2) = %d (Expected: 1)\n", get_bit_status(0b00001100, 2));
    printf("get_bit_status(0b00001100, 1) = %d (Expected: 0)\n", get_bit_status(0b00001100, 1));
}

void test_is_even() {
    printf("Test is_even:\n");
    printf("is_even(2) = %d (Expected: 1)\n", is_even(2));
    printf("is_even(3) = %d (Expected: 0)\n", is_even(3));
}

void test_count_set_bits() {
    printf("Test count_set_bits:\n");
    printf("count_set_bits(0b00001111) = %d (Expected: 4)\n", count_set_bits(0b00001111));
    printf("count_set_bits(0b00000000) = %d (Expected: 0)\n", count_set_bits(0b00000000));
}

void test_is_power_of_2() {
    printf("Test is_power_of_2:\n");
    printf("is_power_of_2(4) = %d (Expected: 1)\n", is_power_of_2(4));
    printf("is_power_of_2(5) = %d (Expected: 0)\n", is_power_of_2(5));
}

void test_subtract() {
    printf("Test subtract:\n");
    printf("subtract(5, 3) = %d (Expected: 2)\n", subtract(5, 3));
    printf("subtract(10, 5) = %d (Expected: 5)\n", subtract(10, 5));
}

void test_add() {
    printf("Test add:\n");
    printf("add(5, 3) = %d (Expected: 8)\n", add(5, 3));
    printf("add(10, 5) = %d (Expected: 15)\n", add(10, 5));
}

void test_xor_without_operator() {
    printf("Test xor_without_operator:\n");
    printf("xor_without_operator(5, 3) = %d (Expected: 6)\n", xor_without_operator(5, 3));
    printf("xor_without_operator(10, 5) = %d (Expected: 15)\n", xor_without_operator(10, 5));
}

void test_size_of_using_bitwise() {
    printf("Test size_of_using_bitwise:\n");
    printf("size_of_using_bitwise() = %d (Expected: 1)\n", size_of_using_bitwise());
}

void test_little_to_big_endian() {
    printf("Test little_to_big_endian:\n");
    printf("little_to_big_endian(0x12345678) = 0x%X (Expected: 0x78563412)\n", little_to_big_endian(0x12345678));
}

void test_multiply_by_n() {
    uint8_t x = 5;
    uint8_t n = 9;
    printf("Testing multiply_by_%d(%d): %d\n", n, x, multiply_by_n(x, n));
}

void test_is_nth_bit_on() {
    uint32_t x = 524288; // 20th bit is on in binary: 10000000000000000000
    uint8_t n = 20;
    printf("Testing is_%dth_bit_on(%d): %d\n", n, x, is_nth_bit_on(x, n));
}

void test_set_bits() {
    printf("Test set_bits:\n");
    printf("set_bits(170, 6, 3, 167) = 0b%s (Expected: 0b10111010)\n", format_binary(set_bits(170, 6, 3, 167)));
}

void test_swap() {
    uint8_t x = 5, y = 3;
    printf("Test swap:\n");
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d (Expected: x = 3, y = 5)\n", x, y);
}

int main() {
    printf("Running tests...\n");
    test_set_bit();
    test_clear_bit();
    test_toggle_bit();
    test_get_bit_status();
    test_is_even();
    test_count_set_bits();
    test_is_power_of_2();
    test_subtract();
    test_add();
    test_xor_without_operator();
    test_size_of_using_bitwise();
    test_little_to_big_endian();
    test_multiply_by_n();
    test_is_nth_bit_on();
    test_set_bits();
    test_swap();

    return 0;
}
