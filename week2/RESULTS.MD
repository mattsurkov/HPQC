# RESULTS - Topic 2: Performance and Parallelism

## Write Performance
| Input Size | Python Time (s) | C Time (s) | Speedup (Python/C) |
| ---------- | --------------- | ---------- | ------------------ |
| 1,000      | 4.7 × 10⁻⁴      | 1.3 × 10⁻⁴ | 3.6×               |
| 10,000     | 3.6 × 10⁻³      | 7.6 × 10⁻⁴ | 4.7×               |
| 20,000     | 7.1 × 10⁻³      | 1.6 × 10⁻³ | 4.4×               |

C consistently performs approximately 4–5 times faster for write operations.

## Read Performance


| Input Size | Python Time (s) | C Time (s) | Speedup Difference |
| ---------- | --------------- | ---------- | ------------------ |
| 20,000     | 2.5e-4          | 1.6e-4     | ~1.5× faster       |



The performance gap is much smaller for read operations.

## Key Observations

![Write Performance](HPQC/blob/main/week2/HPQC/week2/graphs/image1.png)

Write operations show significant performance difference.

Read operations show smaller differences.

Runtime scales approximately linearly with input size.

C demonstrates consistently lower execution time.

## Overall Conclusion
C consistently demonstrates superior performance due to compilation into native machine code and reduced runtime overhead. Python, while slower in execution, offers advantages in simplicity, readability, and development speed.

The results confirm that C is more suitable for performance-critical applications involving large-scale computation or repeated file operations. However, Python remains effective for rapid development and general-purpose programming where maximum performance is not essential.

