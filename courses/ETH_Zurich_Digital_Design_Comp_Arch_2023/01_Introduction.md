# Digital Design and Computer Architecture
## ETH Zürch Spring 2023
### Lecture 1: Introduction and Basics

#### Transformation Hierachy

<table>
<tr><td width="200">Problem</td><td></td></tr>
<tr><td>Algorithm</td><td>&darr; Broader View</td></tr>
<tr><td>Program</td><td></td></tr>
<tr><td>System Software</td><td></td></tr>
<tr><td>SW/HW Interface</td><td>&darr; Traditional Scope</td></tr>
<tr><td>Microarchitecture</td><td>&uarr; Traditional Scope</td></tr>
<tr><td>Logic</td><td></td></tr>
<tr><td>Devices</td><td>&uarr; Broader View</td></tr>
<tr><td>Electrons</td><td></td></tr>
</table>

#### Levels of Transformation

<table>
<tr><td>Algorithm</td><td>Finite, Definite, Effectivly Computable</td></tr>
<tr><td>Program</td><td></td></tr>
<tr><td>System Software</td><td>VM, OS</td></tr>
<tr><td>SW/HW Interface</td><td>ISA Interface</td></tr>
<tr><td>Microarchitecture</td><td>ISA Implementation x86-64, Aarch64..</td></tr>
<tr><td>Logic</td><td>NAND NOR NOT</td></tr>
</table>

#### Architectures - Design Goals

Many different needs:  

- Highest Performance for a specific workload
- Longest battery life, at a fixed size and cost
- Best performance / cost for average workloads

Examples:  

TPU Tensor Processing Unit  

- Systolic data flow 
- Machine Learning acceleration

Tesla Dojo  

- ML Training system
- Custom Chip, System, Cluster and Software stack for specific need.

To achieve energy efficiency and performance need to co-design across broad hierarchy and specialise as much as possible.

#### Difficult Problems / Opportunities

- Demand for data and applications
- Power / Thermal constraints
- Complexity
- Scaling / Memory Bottleneck
- Programmability
- Reliability
- Security

#### Growth of Neural Networks

- 1800x in 2 years from BERT (110M) to GPT-3 (175B)  
- GPT-4 may have 1T parameters  
- Cerebras Wafer Scale ML Engine-2  
  
#### Processing in Memory PIM
  
- Data Movement - Memory access ~100 -> 1000x energy of addition.
- [Upmem](https://www.upmem.com/) 
- [Samsung](https://www.youtube.com/watch?v=3yMEz45weBA)