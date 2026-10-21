# Practical 2: Student Result Database Management Using Array of Structures

## Practical Title
Student Result Database Management Using Array of Structures.

## Problem Statement
Design a student result management system that stores student details such as roll number, name, program, subjects, marks, total, and average. The lab manual describes record creation, display, search, update, and sorting. The supplied C program implements creation, display, and search by roll number.

## Objective
- Understand arrays and structures in C.
- Store related student data in a single structured record.
- Implement record creation, display, and searching.
- Calculate total and average marks.

## Algorithm / Approach
1. Define a `stud` structure containing roll number, name, program, two subject names, marks, total, and average.
2. Read the number of students.
3. For each student, input the name, roll number, program, subjects, and subject marks.
4. Calculate `total = sub1_marks + sub2_marks` and `average = total / 2`.
5. Display all stored records when requested.
6. For searching, read a roll number and scan the records sequentially.
7. Report whether a matching record exists.

> **Implementation note:** The supplied code uses an array of 20 structures and two subjects. Update and sorting operations described in the manual are not implemented in this code.

## Data Structure / Concept Used
- Array of structures (`stud s[20]`)
- Sequential/linear search
- Structure member access using the dot operator

## Test Cases
| Test case | Input scenario | Expected result |
|---|---|---|
| One student | Enter one record with marks 80 and 90 | Total 170; average 85 |
| Search success | Search for an existing roll number | `STUDENT FOUND` |
| Search failure | Search for a roll number not present | `STUDENT NOT FOUND` |
| Multiple students | Enter several records and display | All entered records are displayed |

## Sample Input and Output
**Illustrative input values** (the program prompts for each field):
```text
Number of students: 1
Name: Asha
Roll no.: 101
Program: E&TC
Subject 1: DSA
Subject 2: Maths
Subject 1 marks: 80
Subject 2 marks: 90
```

**Expected displayed result (key fields)**
```text
Name: Asha
Roll no.: 101
Program: E&TC
Subject 1's marks: 80
Subject 2's marks: 90
Total: 170
Average: 85.00
```

Searching for roll number `101` prints `STUDENT FOUND`; searching for an absent roll number prints `STUDENT NOT FOUND`.

## Time Complexity
- Creating or displaying `n` records: **O(n)**.
- Searching by roll number: **O(n)** in the worst case.

## Space Complexity
**O(n)** for the array of `n` student records; the supplied program reserves space for up to 20 records.

## Conclusion
An array of structures provides an organised way to store and process student records. The program calculates results, displays records, and performs a linear search by roll number.
