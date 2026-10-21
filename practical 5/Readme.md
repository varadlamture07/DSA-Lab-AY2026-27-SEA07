# Practical 5: Circular Queue Implementation Using Array for Parcel Handling System

## Practical Title
Circular Queue Implementation Using Array for Parcel Handling System.

## Problem Statement
Implement a circular queue using a fixed-size array to represent parcels waiting at a post office. Support adding a parcel, dispatching the parcel at the front, and displaying the current queue.

## Objective
- Understand circular queues and their advantages over linear queues.
- Implement enqueue, dequeue, and display operations using an array.
- Apply the FIFO principle.
- Manage `front` and `rear` with modulo arithmetic.

## Algorithm / Approach
1. Declare an array of size 5 and initialise `front = rear = -1`.
2. **Add:** if `(rear + 1) % size == front`, report that the queue is full. Otherwise initialise `front` when empty, advance `rear` using modulo, and store the parcel number.
3. **Dispatch:** if `front == -1`, report an empty queue. Otherwise display the parcel at `front`; if it was the last parcel, reset both pointers, else advance `front` modulo the array size.
4. **Display:** if empty, report that the queue is empty. Otherwise traverse from `front` to `rear` using modulo arithmetic.
5. Repeat until the user chooses Exit.

## Data Structure / Concept Used
- Circular queue
- Static array of size 5
- FIFO (First In, First Out)
- `front`, `rear`, and modulo arithmetic

## Test Cases
| Test case | Operations | Expected result |
|---|---|---|
| Empty queue | Display or dispatch immediately | Empty message |
| Normal insertion | Add parcels 101 and 102 | Queue displays `101 102` |
| FIFO dispatch | Dispatch when queue is `101 102` | Parcel 101 is dispatched |
| Full queue | Add six parcels without dispatching | Fifth fits; next add reports full |
| Wrap-around | Dispatch one, then add another | Vacated array slot can be reused |

## Sample Input and Output
```text
1. Add
2. Dispatch
3. Display
4. Exit
Enter a option: 1
Enter parcel no. to add: 101

Enter a option: 1
Enter parcel no. to add: 102

Enter a option: 3
Parcel no. left in queue are: 101 102

Enter a option: 2
Parcel 101 is dispatched
```

## Time Complexity
- Add/enqueue: **O(1)**.
- Dispatch/dequeue: **O(1)**.
- Display: **O(n)**, where `n` is the number of queued parcels.

## Space Complexity
**O(1)** auxiliary space; the fixed queue occupies **O(5)** space, or **O(size)** in general.

## Conclusion
A circular queue reuses array positions freed by dispatched parcels. It preserves FIFO order and provides constant-time insertion and removal.
