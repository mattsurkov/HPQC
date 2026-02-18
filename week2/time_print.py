import sys
import time

def main():
    # checks if there are the right number of arguments
    try:
        # converts the first argument to integer
        in_arg = int(sys.argv[1])
    except:
        raise Exception("Incorrect arguments.\nUsage: python3 time_print.py [NUM]")

    # gets the start time for the loop
    start_time = time.time()

    # iterates over all numbers up to the input
    for i in range(in_arg):
        print("{}, ".format(i), end="")

    # gets the end time
    end_time = time.time()

    # gets the total time
    run_time = end_time - start_time

    print("\n\nTime for loop: {} seconds\n".format(run_time))

if __name__ == "__main__":
    main()

