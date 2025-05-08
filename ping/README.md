# Custom Ping Implementation

A custom implementation of the ping utility in C, allowing users to test network connectivity and measure round-trip time to a target host.

## Features

- ICMP echo request/reply
- Round-trip time measurement
- Packet loss statistics
- Customizable packet size
- Timeout handling

## Building

To build the project:

```bash
make
```

This will create an executable named `ping`.

## Usage

```bash
./ping [target_host]
```

Example:
```bash
./ping google.com
```

## Cleanup

To clean up build artifacts:

```bash
make clean
```

## Implementation Details

The implementation includes:
- ICMP packet creation and parsing
- Socket programming for raw sockets
- Time measurement
- Statistics calculation
- Error handling

## Note

This program requires root/administrator privileges to run due to the use of raw sockets for ICMP packets. 