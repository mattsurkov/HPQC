# README - Topic 3: Introduction to MPI

This repository explores MPI (Message Passing Interface) using C. It includes a basic Hello World MPI program, analysis of proof.c, and a parallel vector addition implementation.

The goal is to understand distributed memory parallelism, message passing, and performance scaling across multiple processes.

##  Findings
-MPI enables true parallel execution across multiple processes

-Performance improves with increasing process count (up to system limits)

-Communication overhead can reduce scalability at higher process counts

-Some parallel problems reduce to simple serial mathematical operations

-Performance gain depends heavily on workload size
##  Conclusion

MPI provides significant performance improvements for large-scale problems, but efficiency is limited by communication overhead and hardware constraints.

For small workloads, parallelisation may not provide benefits. For larger datasets, MPI enables clear performance gains through workload distribution.