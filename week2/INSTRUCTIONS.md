## How to Run the Programs


## All programs were developed and tested using Ubuntu (WSL).


# Compile C Programs

gcc time_write_c.c -o time_write_c
gcc time_read_c.c -o time_read_c

# Run Write Tests

Python:

python3 time_write_py.py 10000


C:

./time_write_c 10000


Replace 10000 with other values such as 1000 or 20000 to test different input sizes.

# Run Read Tests

Python:

python3 time_read_py.py


C:

./time_read_c


# Optional: Use Linux timing tool:

time python3 time_write_py.py 10000
time ./time_write_c 10000
