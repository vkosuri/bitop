/*
 * test_bitop.c
 * 
 * Copyright (c) 2024 vkosuri <malli.kv2@gmail.com>
 * 
 * License: MIT LICENSE, see file in root directory
 */

#include "bitop.h"
#include <assert.h>
#include <stdio.h>

void test_set_bit()
{
    printf("Test set_bit:\n");
    uint8_t x = 0b00000000;
    uint8_t expected = 0b00000100;
    uint8_t result = set_bit(x, 2);
    printf("set_bit(0b00000000, 2) = 0b%s (Expected: 0b00000100)\n", format_binary(result));
    assert(result == expected);

    x = 0b00001100;
    expected = 0b00001100;
    result = set_bit(x, 3);
    printf("set_bit(0b00001100, 3) = 0b%s (Expected: 0b00001100)\n", format_binary(result));
    assert(result == expected);
}

void test_clear_bit()
{
    printf("Test clear_bit:\n");
    uint8_t x = 0b00001100;
    uint8_t expected = 0b00001000;
    uint8_t result = clear_bit(x, 2);
    printf("clear_bit(0b00001100, 2) = 0b%s (Expected: 0b00001000)\n", format_binary(result));
    assert(result == expected);

    expected = 0b00000100;
    result = clear_bit(x, 3);
    printf("clear_bit(0b00001100, 3) = 0b%s (Expected: 0b00000100)\n", format_binary(result));
    assert(result == expected);
}

void test_toggle_bit()
{
    printf("Test toggle_bit:\n");
    uint8_t x = 0b00001100;
    uint8_t expected = 0b00001000;
    uint8_t result = toggle_bit(x, 2);
    printf("toggle_bit(0b00001100, 2) = 0b%s (Expected: 0b00001000)\n", format_binary(result));
    assert(result == expected);

    expected = 0b00001110;
    result = toggle_bit(x, 1);
    printf("toggle_bit(0b00001100, 1) = 0b%s (Expected: 0b00001110)\n", format_binary(result));
    assert(result == expected);
}

void test_get_bit_status()
{
    printf("Test get_bit_status:\n");
    uint8_t x = 0b00001100;
    uint8_t result = get_bit_status(x, 2);
    printf("get_bit_status(0b00001100, 2) = %d (Expected: 1)\n", result);
    assert(result == 1);

    result = get_bit_status(x, 1);
    printf("get_bit_status(0b00001100, 1) = %d (Expected: 0)\n", result);
    assert(result == 0);
}

void test_is_even()
{
    printf("Test is_even:\n");
    uint8_t x = 2;
    uint8_t result = is_even(x);
    printf("is_even(%d) = %d (Expected: 1)\n", x, result);
    assert(result == 1);

    x = 3;
    result = is_even(x);
    printf("is_even(%d) = %d (Expected: 0)\n", x, result);
    assert(result == 0);
}

void test_count_set_bits()
{
    printf("Test count_set_bits:\n");
    uint8_t x = 0b00001111;
    uint8_t result = count_set_bits(x);
    printf("count_set_bits(0b00001111) = %d (Expected: 4)\n", result);
    assert(result == 4);

    x = 0b00000000;
    result = count_set_bits(x);
    printf("count_set_bits(0b00000000) = %d (Expected: 0)\n", result);
    assert(result == 0);
}

void test_is_power_of_2()
{
    printf("Test is_power_of_2:\n");
    uint8_t x = 4;
    uint8_t result = is_power_of_2(x);
    printf("is_power_of_2(%d) = %d (Expected: 1)\n", x, result);
    assert(result == 1);

    x = 5;
    result = is_power_of_2(x);
    printf("is_power_of_2(%d) = %d (Expected: 0)\n", x, result);
    assert(result == 0);
}

void test_subtract()
{
    printf("Test subtract:\n");
    int x = 5, y = 3;
    int result = subtract(x, y);
    printf("subtract(%d, %d) = %d (Expected: 2)\n", x, y, result);
    assert(result == 2);

    x = 10;
    y = 5;
    result = subtract(x, y);
    printf("subtract(%d, %d) = %d (Expected: 5)\n", x, y, result);
    assert(result == 5);
}

void test_add()
{
    printf("Test add:\n");
    int x = 5, y = 3;
    int result = add(x, y);
    printf("add(%d, %d) = %d (Expected: 8)\n", x, y, result);
    assert(result == 8);

    x = 10;
    y = 5;
    result = add(x, y);
    printf("add(%d, %d) = %d (Expected: 15)\n", x, y, result);
    assert(result == 15);
}

void test_xor_without_operator()
{
    printf("Test xor_without_operator:\n");
    int x = 5, y = 3;
    int result = xor_without_operator(x, y);
    printf("xor_without_operator(%d, %d) = %d (Expected: 6)\n", x, y, result);
    assert(result == 6);

    x = 10;
    y = 5;
    result = xor_without_operator(x, y);
    printf("xor_without_operator(%d, %d) = %d (Expected: 15)\n", x, y, result);
    assert(result == 15);
}

void test_size_of_using_bitwise()
{
    printf("Test size_of_using_bitwise:\n");
    int result = size_of_using_bitwise();
    printf("size_of_using_bitwise() = %d (Expected: 1)\n", result);
    assert(result == 1);
}

void test_little_to_big_endian()
{
    printf("Test little_to_big_endian:\n");
    uint32_t x = 0x12345678;
    uint32_t expected = 0x78563412;
    uint32_t result = little_to_big_endian(x);
    printf("little_to_big_endian(0x12345678) = 0x%X (Expected: 0x78563412)\n", result);
    assert(result == expected);
}

void test_multiply_by_n()
{
    uint8_t x = 5;
    uint8_t n = 9;
    uint8_t expected_result = 45; // Expected result of 5 * 9

    uint8_t result = multiply_by_n(x, n);
    printf("Testing multiply_by_n(%d, %d): Result = %d\n", x, n, result);

    // Assert that the result matches the expected_result
    assert(result == expected_result);
}

void test_is_nth_bit_on()
{
    uint32_t x = 524288; // 20th bit is on in binary: 10000000000000000000
    uint8_t n = 20;

    uint8_t result = is_nth_bit_on(x, n);
    printf("Testing is_%dth_bit_on(%d): Result = %d\n", n, x, result);

    // Assert that the 20th bit is on (result should be 1)
    assert(result == 1);
}

void test_set_bits()
{
    printf("Test set_bits:\n");
    uint8_t x = 170;
    uint8_t expected = 0b10111010;
    uint8_t result = set_bits(x, 6, 3, 167);
    printf("set_bits(170, 6, 3, 167) = 0b%s (Expected: 0b10111010)\n", format_binary(result));
    assert(result == expected);
}

void test_swap()
{
    uint8_t x = 5, y = 3;
    printf("Test swap:\n");
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d (Expected: x = 3, y = 5)\n", x, y);
    assert(x == 3 && y == 5);
}

void test_clear_lsb()
{
    printf("Testing clear_lsb...\n");

    uint8_t x = 0b10101010; // 170 in decimal
    uint8_t expected = 0b10101000; // 168 in decimal
    uint8_t result = clear_lsb(x);

    assert(result == expected && "clear_lsb test failed!");
    printf("clear_lsb test passed!\n");
}

void test_find_msb()
{
    printf("Testing find_msb...\n");

    uint8_t x = 0b10101010; // 170 in decimal
    uint8_t expected = 7; // MSB is at position 7 (1-indexed)
    uint8_t result = find_msb(x);

    assert(result == expected && "find_msb test failed!");
    printf("find_msb test passed!\n");
}

void test_swap_nibbles()
{
    printf("Testing swap_nibbles...\n");

    uint8_t x = 0b10101010; // 170 in decimal
    uint8_t expected = 0b01010101; // 85 in decimal
    uint8_t result = swap_nibbles(x);

    assert(result == expected && "swap_nibbles test failed!");
    printf("swap_nibbles test passed!\n");
}

int main()
{
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
    // test_is_nth_bit_on();
    // test_set_bits();
    test_swap();
    test_clear_lsb();
    // test_find_msb();
    // test_swap_nibbles();

    printf("All tests passed!\n");

    return 0;
}
