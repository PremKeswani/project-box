# UDP Server-Client Implementation

A simple UDP-based client-server communication system implemented in C. This project demonstrates basic UDP socket programming and network communication.

## Features

- UDP server implementation
- UDP client implementation
- Simple message exchange protocol
- Basic error handling

## Building

To build both the server and client:

```bash
make
```

This will create two executables:
- `server`: The UDP server program
- `client`: The UDP client program

## Usage

1. Start the server:
```bash
./server [port]
```

2. In a separate terminal, start the client:
```bash
./client [server_ip] [port]
```

## Cleanup

To clean up build artifacts:

```bash
make clean
```

## Implementation Details

The implementation includes:
- Socket creation and configuration
- UDP datagram handling
- Basic message exchange
- Port and IP address handling 