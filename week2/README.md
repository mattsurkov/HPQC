#week 2 read me
 
Python vs C file runtime comparison
In this experiment, programs written in both C and Python were tested for file writing and file reading performance. The programs generated integer sequences of increasing size (1,000;  10,000; and 20,000) and measured execution time using internal timing functions.
Writing Performance
For file writing, C consistently outperformed Python. At 10,000 values, Python required approximately 3.6e-3 seconds, while C required approximately 7.6e-4 seconds. At 20,000 values, Python required approximately 7.1e-3 seconds compared to C’s 1.6e-3 seconds. This shows C was approximately 4–5 times faster for write operations.
The difference can be attributed to Python being an interpreted language with dynamic typing and higher-level file abstractions, while C compiles directly to machine code and performs lower-level file operations.
Reading Performance
For file reading, both languages performed very quickly. The difference between C and Python was smaller than in write tests. At 20,000 values, Python required approximately 2.5e-4 seconds while C required approximately 1.6e-4 seconds. This indicates that when disk I/O dominates the runtime, the performance gap narrows.
Scaling Behaviour
In all experiments, runtime increased approximately linearly with input size. Doubling the number of values roughly doubled execution time. This suggests both implementations operate with O(n) time complexity and behave as expected.
Overall Conclusion
C consistently demonstrates superior performance due to compilation to native machine code and lower runtime overhead. Python, while slower, remains sufficiently fast for moderate workloads and benefits from simpler syntax and ease of development.
The experiments confirm that for performance-critical tasks involving large-scale iteration and file writing, C offers significant advantages. However, for general programming tasks where development speed and readability are more important than maximum performance, Python remains a practical and efficient choice.

