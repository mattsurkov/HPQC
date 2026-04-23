# README - Topic 2: Performance and Parallelism

This project investigates execution time and performance differences between C and Python programs using the Linux time command. The work focuses on benchmarking computation and file input/output operations.

The experiments include simple programs, inefficient algorithms, and file read/write operations. The aim is to understand how performance varies between compiled and interpreted languages and how execution time scales with input size.

## Key Findings

C consistently performs faster than Python, especially for computation-heavy tasks.

Write operations show the largest performance difference between the two languages.

Read operations show smaller differences due to reliance on system-level I/O.

Execution time increases approximately linearly with input size.

User and system time combined can exceed real time, indicating parallel or multi-core CPU usage.

## Overall Conclusion

C consistently demonstrates superior performance due to compilation into machine code and reduced runtime overhead. Python, while easier to use and more flexible, introduces additional interpretation costs that become significant for larger workloads.

For high performance computing tasks, especially those involving large data or repeated operations, C is more efficient and scalable. Python remains useful for rapid development and simpler tasks where performance is less critical.