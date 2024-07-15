/*
 * bitops.h
 * 
 * Copyright (c) 2024 vkosuri <malli.kv2@gmail.com>
 * 
 * License: MIT LICENSE, see file in root directory
 */

#ifndef BITOPS_H
#define BITOPS_H

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif


/**
 * @brief Sets a specific bit in a number.
 * 
 * @param x The original number.
 * @param p The position of the bit to set (0-indexed).
 * @return The number with the specified bit set.
 */
uint8_t set_bit(uint8_t x, uint8_t p);

/**
 * @brief Clears a specific bit in a number.
 * 
 * @param x The original number.
 * @param p The position of the bit to clear (0-indexed).
 * @return The number with the specified bit cleared.
 */
uint8_t clear_bit(uint8_t x, uint8_t p);

/**
 * @brief Toggles a specific bit in a number.
 * 
 * @param x The original number.
 * @param p The position of the bit to toggle (0-indexed).
 * @return The number with the specified bit toggled.
 */
uint8_t toggle_bit(uint8_t x, uint8_t p);

/**
 * @brief Gets the status (on/off) of a specific bit in a number.
 * 
 * @param x The original number.
 * @param p The position of the bit to check (0-indexed).
 * @return 1 if the bit is on, 0 if it is off.
 */
uint8_t get_bit_status(uint8_t x, uint8_t p);

/**
 * @brief Checks if a number is even.
 * 
 * @param x The number to check.
 * @return 1 if the number is even, 0 if it is odd.
 */
uint8_t is_even(uint8_t x);

/**
 * @brief Formats a number as a binary string.
 * 
 * @param x The number to format.
 * @return A string representing the binary representation of x.
 */
char* format_binary(uint8_t x);

/**
 * @brief Counts the number of set bits (1s) in a number.
 * 
 * @param x The number to count set bits in.
 * @return The count of set bits.
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
 * @brief Subtracts two numbers without using the '-' operator.
 * 
 * @param x The minuend.
 * @param y The subtrahend.
 * @return The result of x - y.
 */
int8_t subtract(int8_t x, int8_t y);

/**
 * @brief Adds two numbers without using the '+' operator.
 * 
 * @param x The first operand.
 * @param y The second operand.
 * @return The sum of x and y.
 */
int8_t add(int8_t x, int8_t y);

/**
 * @brief Performs XOR between two numbers without using the '^' operator.
 * 
 * @param x The first operand.
 * @param y The second operand.
 * @return The result of x XOR y.
 */
uint8_t xor_without_operator(uint8_t x, uint8_t y);

/**
 * @brief Computes the size of a data type using bitwise operations.
 * 
 * @return The size of a data type (in bytes) represented by uint8_t.
 */
uint8_t size_of_using_bitwise();

/**
 * @brief Converts a little-endian integer to a big-endian integer.
 * 
 * @param x The little-endian integer.
 * @return The equivalent big-endian integer.
 */
uint32_t little_to_big_endian(uint32_t x);

/**
 * @brief Multiplies a number by another number using bit shifts.
 * 
 * @param x The number to multiply.
 * @param n The multiplier (positive integer).
 * @return The result of x * n.
 */
uint8_t multiply_by_n(uint8_t x, uint8_t n);

/**
 * @brief Checks if a specific bit in a 32-bit integer is on.
 * 
 * @param x The number to check.
 * @param n The position of the bit to check (0-indexed).
 * @return 1 if the nth bit is on, 0 otherwise.
 */
uint8_t is_nth_bit_on(uint32_t x, uint8_t n);

/**
 * @brief Sets specified bits in a number from another number.
 * 
 * @param x The original number.
 * @param p The starting position (0-indexed) to set bits.
 * @param n The number of bits to set.
 * @param y The number providing bits to set.
 * @return The number with specified bits set from y.
 */
uint8_t set_bits(uint8_t x, uint8_t p, uint8_t n, uint8_t y);

/**
 * @brief Swaps the values of two variables using bitwise XOR.
 * 
 * @param x Pointer to the first variable.
 * @param y Pointer to the second variable.
 */
void swap(uint8_t *x, uint8_t *y);

/**
 * @brief Clears the least significant bit (LSB) of a number.
 * 
 * @param x The original number.
 * @return The number with the LSB cleared.
 */
uint8_t clear_lsb(uint8_t x);

/**
 * @brief Finds the position of the most significant bit (MSB) in a number.
 * 
 * @param x The number to find MSB in.
 * @return The position of the MSB (1-indexed).
 */
uint8_t find_msb(uint8_t x);

/**
 * @brief Swaps the high and low nibbles (4-bit segments) of a byte.
 * 
 * @param x The byte to swap nibbles in.
 * @return The byte with swapped nibbles.
 */
uint8_t swap_nibbles(uint8_t x);

#ifdef __cplusplus
}
#endif

#endif /* BITOPS_H */
