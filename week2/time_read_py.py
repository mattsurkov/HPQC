import time

def main():
    try:
        file = open("data/output_py.txt", "r")
    except:
        print("File not found. Run time_write_py.py first.")
        return

    start_time = time.time()

    # Read entire file into memory
    contents = file.read()

    end_time = time.time()

    file.close()

    run_time = end_time - start_time

    print("Python read time:", run_time, "seconds")

if __name__ == "__main__":
    main()
