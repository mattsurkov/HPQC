Numerical Performance Summary
Write Performance
Input Size	Python Time (s)	C Time (s)	Speed Difference
1,000	4.7e-4	1.3e-4	~3.6× faster
10,000	3.6e-3	7.6e-4	~4.7× faster
20,000	7.1e-3	1.6e-3	~4.4× faster

C consistently performs approximately 4–5 times faster for write operations.

Read Performance
Input Size	Python Time (s)	C Time (s)	Speed Difference
20,000	2.5e-4	1.6e-4	~1.5× faster

The performance gap is much smaller for read operations.

Key Observations

Write operations show significant performance difference.

Read operations show smaller differences.

Runtime scales approximately linearly with input size.

C demonstrates consistently lower execution time.
