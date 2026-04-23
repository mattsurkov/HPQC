# INSTRUCTIONS - Topic 2: Performance and Parallelism
## How to Run the Programs
### Environment

All programs were developed and tested using Ubuntu (WSL or Linux environment).

### Compile C Programs
```bash
gcc time_write_c.c -o time_write_c
gcc time_read_c.c -o time_read_c
```

### Run Write Tests
```bash
Python:

python3 time_write_py.py 10000

C:

./time_write_c 10000
```
You can replace 10000 with other values such as 1000 or 20000.

### Run Read Tests
```bash
Python:

python3 time_read_py.py

C:

./time_read_c
```

### Measure Execution Time
```bash
time python3 time_write_py.py 10000

time ./time_write_c 10000
```
The output includes:
```bash

real: total execution time

user: CPU time spent on computation

sys: time spent on system operations
```
