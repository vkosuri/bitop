# bitops

bitops is a C library for bitwise operations.

## Features

- Implements various bitwise operations such as set, clear, toggle, etc.
- Provides functions to count set bits, check if a number is a power of two, and more.

## Usage

To build the library and examples:

```bash
make all
make run_tests
```

To clean up generated files:

``` bash
make clean
```

## API Functions

| Function                | Description                                                  | Real World Example                                |
|-------------------------|--------------------------------------------------------------|--------------------------------------------------------------|
| [`set_bit`](https://github.com/vkosuri/bitops/wiki/set_bit)               | Sets a specific bit in a number.                              | Setting GPIO pins in a microcontroller to control peripheral devices. |
| [`clear_bit`](https://github.com/vkosuri/bitops/wiki/clear_bit)             | Clears a specific bit in a number.                            | Clearing interrupt flags in an interrupt controller.         |
| [`toggle_bit`](https://github.com/vkosuri/bitops/wiki/toggle_bit)            | Toggles a specific bit in a number.                           | Toggling LED states in an embedded system.                   |
| `get_bit_status`        | Gets the status (on/off) of a specific bit in a number.       | Checking status bits in a communication protocol buffer.      |
| [`is_even`](https://github.com/vkosuri/bitops/wiki/is_even)               | Checks if a number is even.                                   | Polling sensors at regular intervals in an IoT device.       |
| [`format_binary`](https://github.com/vkosuri/bitops/wiki/format_binary)         | Formats a number as a binary string.                          | Displaying binary data on an LCD screen for debugging.       |
| `count_set_bits`        | Counts the number of set bits (1s) in a number.               | Counting active flags in a status register.                  |
| [`is_power_of_2`](https://github.com/vkosuri/bitops/wiki/is_power_of_2)         | Checks if a number is a power of two.                         | Checking memory allocation sizes in an embedded OS.          |
| [`subtract`](https://github.com/vkosuri/bitops/wiki/subtract)              | Subtracts two numbers without using the '-' operator.         | Calculating time differences in an embedded timer system.    |
| [`add`](https://github.com/vkosuri/bitops/wiki/add)                   | Adds two numbers without using the '+' operator.              | Accumulating sensor readings in a data logger.               |
| [`xor_without_operator`](https://github.com/vkosuri/bitops/wiki/xor_without_operator)  | Performs XOR between two numbers without using the '^' operator. | Encrypting data in a secure communication module.           |
| [`size_of_using_bitwise`](https://github.com/vkosuri/bitops/wiki/size_of_using_bitwise) | Computes the size of a data type using bitwise operations.    | Calculating buffer sizes in a data transfer protocol.        |
| [`little_to_big_endian`](https://github.com/vkosuri/bitops/wiki/little_to_big_endian)  | Converts a little-endian integer to a big-endian integer.    | Serializing data for network transmission in an embedded web server. |
| [`multiply_by_n`](https://github.com/vkosuri/bitops/wiki/multiply_by_n)         | Multiplies a number by another using bit shifts.              | Scaling analog signals in a sensor interface circuit.        |
| [`is_nth_bit_on`](https://github.com/vkosuri/bitops/wiki/is_nth_bit_on)         | Checks if a specific bit in a 32-bit integer is on.           | Validating button presses in a user interface controller.    |
| [`set_bits`](https://github.com/vkosuri/bitops/wiki/set_bits)              | Sets specified bits in a number from another number.          | Writing configuration bits in a device control register.     |
| `swap`                  | Swaps the values of two variables using bitwise XOR.          | Exchanging data between main memory and a peripheral buffer.  |
| [`clear_lsb`](https://github.com/vkosuri/bitops/wiki/clear_lsb)             | Clears the least significant bit (LSB) of a number.          | Implementing round-robin scheduling in an embedded OS.       |
| [`find_msb`](https://github.com/vkosuri/bitops/wiki/find_msb)              | Finds the position of the most significant bit (MSB) in a number. | Determining signal levels in an analog-to-digital converter. |
| [`swap_nibbles`](https://github.com/vkosuri/bitops/wiki/swap_nibbles)          | Swaps the high and low nibbles (4-bit segments) of a byte.   | Reordering data bytes in a serial communication protocol.    |

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.