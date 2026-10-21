# Practical 3: Searching Contact Names Using Sequential Search and Binary Search

## Practical Title
Searching Contact Names Using Sequential Search and Binary Search.

## Problem Statement
Create a contact manager that stores contact names, phone numbers, and addresses. Search for a requested name using sequential search and binary search, and compare the number of comparisons.

## Objective
- Implement sequential (linear) search and binary search.
- Understand that binary search requires sorted data.
- Compare the search methods and their efficiency.
- Apply searching algorithms to contact records.

## Algorithm / Approach
1. Read the number of contacts and input each contact's name, phone number, and address.
2. Display the contact records.
3. **Sequential search:** compare the requested name with each contact name until it is found or the list ends; count comparisons.
4. Sort the contact names alphabetically using bubble sort.
5. **Binary search:** initialise `low = 0` and `high = n - 1`; compare the key with the middle name and discard the half that cannot contain the key.
6. Stop when the name is found or `low > high`; display the result and comparison count.

> **Implementation note:** The supplied code sorts the `name` fields only; it does not move the corresponding phone and address fields during sorting. Binary-search output therefore reports the name's sorted position, while the original record associations are not preserved in the sorted array.

## Data Structure / Concept Used
- Array of `contact` structures
- Sequential search
- Binary search
- Bubble sort
- String comparison (`strcasecmp`)

## Test Cases
| Test case | Search key | Expected result |
|---|---|---|
| First contact | A name at the beginning of the input | Sequential search finds it |
| Existing contact | A name in the list | Both methods report found |
| Missing contact | `Zoya` when not entered | Both methods report not found |
| Single contact | One contact in the list | Search checks the sole entry |

## Sample Input and Output
**Example contacts**
```text
3
Asha 9000000001 Pune
Meera 9000000002 Mumbai
Ravi 9000000003 Nashik
Search name: Meera
```

**Illustrative output**
```text
CONTACT FOUND
Name: Meera
Contact: 9000000002
Address: Mumbai
Linear comparisons: 2

Contact found at location 2
Number of binary comparisons: 1
```

Comparison counts depend on the entered order and the exact sorted list.

## Time Complexity
- Sequential search: **O(n)** worst case.
- Bubble sort before binary search: **O(n²)** worst case.
- Binary search after sorting: **O(log n)** worst case.
- Overall program: **O(n²)** worst case because of bubble sorting.

## Space Complexity
**O(n)** for the contact array. The search algorithms themselves use **O(1)** auxiliary space.

## Conclusion
Sequential search works with unsorted data, whereas binary search needs sorted names and reduces lookup comparisons. Sorting dominates the overall running time in this implementation.
