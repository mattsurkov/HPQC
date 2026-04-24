# INSTRUCTIONS - Topic 4: MPI Communications
## How to Run the Programs
### Environment

All programs were developed and tested on a Linux environment using SSH on the HPC cluster.

### Compile Programs
```bash
mpicc comm_test_mpi.c -o bin/comm_test_mpi
mpicc pingpong.c -o bin/pingpong
mpicc pingpong_bandwidth.c -o bin/pingpong_bandwidth
```
This compiles the MPI programs and places the executables in the bin/ directory
### Run Communication Tests
```bash
mpirun -np 2 bin/comm_test_mpi standard
mpirun -np 2 bin/comm_test_mpi synchronous
mpirun -np 2 bin/comm_test_mpi buffered
mpirun -np 2 bin/comm_test_mpi ready
mpirun -np 2 bin/comm_test_mpi nonblocking
```
These commands test different MPI send methods using 2 processes.
### Run Latency Test (Ping-Pong)
```bash
mpirun -np 2 bin/pingpong 1000
mpirun -np 2 bin/pingpong 10000
mpirun -np 2 bin/pingpong 100000
```

The argument controls how many times the message is sent back and forth.

### Run Bandwidth Test
```bash
mpirun -np 2 bin/pingpong_bandwidth 10000 100
mpirun -np 2 bin/pingpong_bandwidth 10000 1000
mpirun -np 2 bin/pingpong_bandwidth 10000 10000
mpirun -np 2 bin/pingpong_bandwidth 10000 100000
mpirun -np 2 bin/pingpong_bandwidth 10000 1000000
```

First argument = number of ping-pong iterations

Second argument = message size in bytes.

These tests measure how communication performance changes with message size.
### Measure Execution Time
```bash
time mpirun -np 2 bin/pingpong 10000
```
## Output includes:
```bash
real: total runtime
user: CPU computation time
sys: system-level operations
```

## Optional: Save Results to CSV
```bash
mpirun -np 2 bin/pingpong_bandwidth 10000 100 >> results.txt
```