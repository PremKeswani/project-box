# SHA-512 Implementation

A C implementation of the SHA-512 cryptographic hash function. This project provides a simple and efficient way to generate SHA-512 hashes for input data.

## Features

- Pure C implementation of SHA-512
- Handles input data of any length
- Produces 512-bit (64-byte) hash output
- Includes proper padding and message scheduling

## Building

To build the project, simply run:

```bash
make
```

This will create an executable named `sha512`.

## Usage

```bash
./sha512 < input_file
```

The program reads input from stdin and outputs the SHA-512 hash in hexadecimal format.

## Cleanup

To clean up build artifacts:

```bash
make clean
```

## Implementation Details

The implementation follows the SHA-512 specification as defined in FIPS 180-4, including:
- Message padding
- Message scheduling
- Compression function
- Final hash computation 