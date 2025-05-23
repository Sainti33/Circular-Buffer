Circular Queue Implementation in C
This project provides a simple implementation of a circular queue using an array in the C programming language.

🚀 Features
Fixed-size circular queue using an array (#define MAX_SIZE 5)

Basic queue operations:

Enqueue – Insert an element at the rear

Dequeue – Remove an element from the front

IsQueFull – Check if the queue is full

IsQueEmpty – Check if the queue is empty

Efficient memory usage with circular buffer logic

Overflow and underflow checks with informative messages

🛠️ How It Works
The queue uses two indices: Front and Rear.

On Enqueue, the element is added at (Rear + 1) % MAX_SIZE.

On Dequeue, the element is removed from Front, and Front is updated using modular arithmetic.

If the queue becomes empty after a Dequeue, both Front and Rear are reset to -1.

This design allows reuse of array space that becomes free at the front, unlike a linear queue.

💡 Limitation
The size is fixed at compile-time (MAX_SIZE = 5).

Does not dynamically resize.

No thread safety for concurrent access (can be added with synchronization primitives).

Overflow and underflow only print messages – can be improved by returning error codes.

📂 File Structure
circular_queue.c – Main C program implementing the circular queue logic.

📦 How to Compile and Run
bash
Copy
Edit
gcc circular_queue.c -o circular_queue
./circular_queue
