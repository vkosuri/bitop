/*
 * bitop.h
 * 
 * Copyright (c) 2024 [Your Name]
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

#ifndef BITOP_H
#define BITOP_H

#include <stdint.h>

/**
 * @brief Sets a particular bit on an unsigned integer.
 * 
 * @param x The number to modify.
 * @param p The position of the bit to set (0-7).
 * @return The modified number with the bit set.
 */
uint8_t set_bit(uint8_t x, uint8_t p);

/**
 * @brief Clears a particular bit.
 * 
 * @param x The number to modify.
 * @param p The position of the bit to clear (0-7).
 * @return The modified number with the bit cleared.
 */
uint8_t clear_bit(uint8_t x, uint8_t p);

/**
 * @brief Toggles a particular bit.
 * 
 * @param x The number to modify.
 * @param p The position of the bit to toggle (0-7).
 * @return The modified number with the bit toggled.
 */
uint8_t toggle_bit(uint8_t x, uint8_t p);

/**
 * @brief Gets the status of a particular bit.
 * 
 * @param x The number to check.
 * @param p The position of the bit to check (0-7).
 * @return 1 if the bit is set, 0 if the bit is cleared.
 */
uint8_t get_bit_status(uint8_t x, uint8_t p);

/**
 * @brief Determines if a number is even or odd.
 * 
 * @param x The number to check.
 * @return 1 if the number is even, 0 if the number is odd.
 */
uint8_t is_even(uint8_t x);

/**
 * @brief Formats a number as a binary string.
 * 
 * @param x The number to format.
 * @return A pointer to the binary string.
 */
char* format_binary(uint8_t x);

/**
 * @brief Counts the number of set bits (1s) in an integer.
 * 
 * @param x The number to check.
 * @return The number of set bits.
 */
uint8_t count_set_bits(uint8_t x);

/**
 * @brief Checks if a number is a power of 2.
 * 
 * @param x The number to check.
 * @return 1 if the number is a power of 2, 0 otherwise.
 */
uint8_t is_power_of_2(uint8_t x);

/**
 * @brief Subtracts two numbers without using the subtraction operator.
 * 
 * @param x The minuend.
 * @param y The subtrahend.
 * @return The result of x - y.
 */
int8_t subtract(int8_t x, int8_t y);

/**
 * @brief Adds two numbers without using the addition operator.
 * 
 * @param x The first addend.
 * @param y The second addend.
 * @return The sum of x and y.
 */
int8_t add(int8_t x, int8_t y);

/**
 * @brief XORs two numbers without using the XOR operator.
 * 
 * @param x The first operand.
 * @param y The second operand.
 * @return The result of x ^ y.
 */
uint8_t xor_without_operator(uint8_t x, uint8_t y);

/**
 * @brief Calculates the size of a type using bitwise operations.
 * 
 * @return The size of the type in bytes.
 */
uint8_t size_of_using_bitwise();

/**
 * @brief Converts a little-endian integer to a big-endian integer.
 * 
 * @param x The little-endian integer.
 * @return The big-endian integer.
 */
uint32_t little_to_big_endian(uint32_t x);

/**
 * @brief Multiplies a number by a positive integer using bit shifts.
 * 
 * @param x The number to multiply.
 * @param n The positive integer multiplier.
 * @return The result of x * n.
 */
uint8_t multiply_by_n(uint8_t x, uint8_t n);

/**
 * @brief Checks if the nth bit of a 32-bit integer is on or off.
 * 
 * @param x The number to check.
 * @param n The bit position to check (0 to 31).
 * @return 1 if the nth bit is on, 0 if it is off.
 */
uint8_t is_nth_bit_on(uint32_t x, uint8_t n);

/**
 * @brief Sets n bits of x starting from position p to the rightmost n bits of y.
 * 
 * @param x The original number.
 * @param p The position to start setting bits.
 * @param n The number of bits to set.
 * @param y The number to take bits from.
 * @return The modified number.
 */
uint8_t set_bits(uint8_t x, uint8_t p, uint8_t n, uint8_t y);

/**
 * @brief Swaps two numbers using bitwise operations.
 * 
 * @param x The first number.
 * @param y The second number.
 * @return void
 */
void swap(uint8_t *x, uint8_t *y);

#endif /* BITOP_H */
