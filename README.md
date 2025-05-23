Circular Queue Implementation in C
This project demonstrates a simple implementation of a circular queue using a static array in C.

Overview
The circular queue (also known as a circular buffer or ring buffer) allows efficient memory utilization by treating the buffer as circular. This example uses a fixed-size array and maintains two indices — Front and Rear — to manage the queue operations.

Features
Fixed size buffer (MAX_SIZE defined as 5)

Supports standard queue operations:

Enqueue(int val) – Adds an element to the queue

Dequeue(void) – Removes and returns an element from the queue

IsQueFull(void) – Checks if the queue is full

IsQueEmpty(void) – Checks if the queue is empty

Data Structure
c
Copy
Edit
#define MAX_SIZE 5

typedef struct {
    int DataBuff[MAX_SIZE];
    int Front, Rear;
} CIR_BUFF;
DataBuff stores the data.

Front and Rear track the start and end of the queue respectively.

Function Details
IsQueFull: Returns 1 if the queue is full, 0 otherwise.

IsQueEmpty: Returns 1 if the queue is empty, 0 otherwise.

Enqueue: Adds a new element to the Rear of the queue. Updates Front if the queue was empty.

Dequeue: Removes and returns the element at the Front. Resets the queue if the last element is dequeued.

How to Use
Compile the code using a C compiler:

bash
Copy
Edit
gcc -o circular_queue circular_queue.c
Run the executable:

bash
Copy
Edit
./circular_queue
Modify the main function to test the queue operations.

Limitations
The buffer size is fixed (MAX_SIZE = 5). To support dynamic sizes, the structure and logic need to be modified accordingly.

No thread-safety; intended for single-threaded environments.
