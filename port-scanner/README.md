# Port Scanner

A network port scanner implemented in C that allows users to scan for open ports on a target host. This tool is useful for network diagnostics and security testing.

## Features

- TCP port scanning
- Custom port range specification
- Multiple scanning techniques
- Basic error handling and timeout management

## Building

To build the project:

```bash
make
```

This will create an executable named `scanner`.

## Usage

```bash
./scanner [target_ip] [start_port] [end_port]
```

Example:
```bash
./scanner 192.168.1.1 1 1024
```

## Cleanup

To clean up build artifacts:

```bash
make clean
```

## Implementation Details

The scanner includes:
- TCP connection attempts
- Port range validation
- Timeout handling
- Basic error reporting
- Network socket programming

## Note

This tool should only be used on networks and systems you have permission to scan. Unauthorized port scanning may be illegal in some jurisdictions. 