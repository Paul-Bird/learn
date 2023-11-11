# ECE 353 Winter 2023
## Systems Software
### Kernal Mode

Instruction Set Architecture (ISA)
- x86-64 (aka AMD64)
- aarch64 (aka ARM64)
- riscv (aka RV32EC / RV64GC)

### x86-64 Rings 
limit access to instructions in ring and above. 
- Ring -1 Hypervisor
- Ring 0 Kernel / Supervisor
- Ring 3 User

> user space
> - - - - - -
> system calls - read write open close fork .... (451 total)  
> - - - - - - 
> Kernel space  
  
Application Binary Interface (ABI) C calling convention, compiler deals with this.  
  
Example: System Call ABI for Linux AArch64  
Enter kernel with a SuperVisor Call (svc) instruction  
x8 - System call number (which function to call)  
X0 - 1st argument  
X1 - 2nd argument  
...  
X5 - 6th argument  

System calls are represented like regular C functions, they run in kernel mode and interact with the hardware.  

[Executable and Linkable Format (ELF)](https://en.wikipedia.org/wiki/Executable_and_Linkable_Format)

first 4 bytes 0x7F 'E' 'L' 'F' followed by byte for architecture 32bit / 64bit  

PNG file has first 4 bytes 0x89 'P' 'N' 'G' 

> `readelf -a filename`  

> `strace /bin/ls`   lists all the system calls made when running the executable  
> `strace -c /bin/ls` shows summary, how often each call is made  
> `strace -e write /bin/ls`  
  
> `write(1, "Hello world\n", 12)`  
> `exit_group(0)`  

Monolithic Kernel
-Virtual Memory, IPC, Device drivers, file systems all run in the Kernel

Microkernel
-Virtual Memory, Process Scheduling, Basic IPC in Kernel space. 
-File Systems, Device drivers, Advanced IPC runs in User space.

Hybrid
-Between Monolithic Kernel and Microkernel



