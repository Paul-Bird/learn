# ECE 353 Winter 2023
## Systems Software
### Overview
>"All problems in computer science can be solved with another level of indirection" - David Wheeler

An operating system is just another layer of indirection to coordinate resources.

Running one program for example in an embedded system does not require an operating system (OS).

Instead of running one application the computer runs the OS code, which can run a number of other processes.

A process is an abstraction of a CPU with registers and program counter. The OS switches processes on the physical CPUs

Each process thinks it has access to all the resources, memory is virtualised, the OS manages this illusion.

Each process can use the same virtual memory addresses. The OS maps the virtual memory access to different physical memory locations.

OS provides inter-process communication (IPC), access control and persistence using a file system.

File descriptors abstract communication and persistence, just an identifier (number) that can be read from or written to.





