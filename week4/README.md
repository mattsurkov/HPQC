# README - Topic 4: MPI Communications

This project explores message passing using MPI and measures communication performance on a high-performance computing cluster. The work includes basic point-to-point communication, testing different send methods, and benchmarking latency and bandwidth using a ping-pong approach.

The communication code was refactored into functions to improve structure and readability. Different MPI send methods were tested to compare behaviour, and timing measurements were taken using built-in MPI timing functions.

A ping-pong program was developed to send messages repeatedly between two processes. This was used to measure latency for small messages and bandwidth for larger messages by sending dynamically allocated arrays.

## Findings

MPI communication is extremely fast for small messages, with latency in the sub-microsecond range.

Average communication time stabilises as the number of iterations increases.

Different MPI send methods show minimal performance difference for small messages.

Bandwidth increases with message size and begins to stabilise for larger transfers.

Very small message sizes are dominated by latency, while large message sizes reflect bandwidth limits.

##  Conclusion

MPI provides efficient and reliable communication between processes. For small messages, latency is the dominant factor, while for larger messages, bandwidth becomes the key performance metric.

The ping-pong benchmark demonstrates how communication cost scales with message size and repetition. The results confirm that MPI is well suited for high performance computing tasks where fast and scalable communication is required.