# INSTRUCTIONS - How to Run MPI Programs
## Compile Programs
```bash
mpicc my_hello_mpi.c -o bin/my_hello_mpi
mpicc vector_mpi.c -o bin/vector_mpi
gcc vector_serial.c -o bin/vector_serial
``` 
## Run MPI Hello World
```bash
mpirun -np 2 bin/my_hello_mpi
mpirun -np 4 bin/my_hello_mpi
```
## Run MPI Vector Program
```bash
mpirun -np 4 bin/vector_mpi 10
mpirun -np 4 bin/vector_mpi 100
mpirun -np 4 bin/vector_mpi 10000
mpirun -np 4 bin/vector_mpi 100000000
mpirun -np 4 bin/vector_mpi 100000000000
```
## Run Serial Vector Program
```bash
./bin/vector_serial 100000000
./bin/vector_serial 100000000000
```
## Measure Execution Time
```bash
time mpirun -np 4 bin/vector_mpi 10000
time ./bin/vector_serial 10000
```
## Time Output Meaning
```bash
real → total elapsed time (wall clock)
user → CPU computation time
sys  → kernel/system communication time
```