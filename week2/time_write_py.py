import sys
import time

def main():
    try:
        n = int(sys.argv[1])
    except:
        print("Usage: python3 time_write_py.py")
        return

    # open file for writing
    file = open("data/output_py.txt", "w")

    start_time = time.time()

    for i in range(n):
        file.write("{}, ".format(i))

    end_time = time.time()

    file.close()

    run_time = end_time - start_time

    print("Python write time:", run_time, "seconds")

if __name__ == "__main__":
    main()
