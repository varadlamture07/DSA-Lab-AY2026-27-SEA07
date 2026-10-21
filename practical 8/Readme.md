# Practical 8: Binary Search Tree Operations for Online Directory System

## Practical Title
Binary Search Tree Operations for Online Directory System.

## Problem Statement
Implement a Binary Search Tree (BST) to store directory contact names and phone numbers. Support insertion, searching by name, and recursive inorder, preorder, and postorder traversals.

## Objective
- Understand BST ordering properties.
- Insert and search directory entries.
- Implement recursive tree traversals.
- Observe how tree shape affects search efficiency.

## Algorithm / Approach
1. Initialise the root pointer to `NULL`.
2. **Insert:** allocate a node for the name and phone number. If the tree is empty, make it the root; otherwise compare names case-insensitively and move left for smaller names or right for larger names until an empty child is found.
3. **Inorder traversal:** traverse left subtree, print the node, then traverse right subtree.
4. **Preorder traversal:** print the node, traverse left subtree, then traverse right subtree.
5. **Postorder traversal:** traverse left subtree, traverse right subtree, then print the node.
6. **Search:** compare the key with the current node; report found if equal, otherwise continue into the appropriate subtree. Report not found at a null pointer.

## Data Structure / Concept Used
- Binary Search Tree
- Dynamically allocated nodes with left/right pointers
- Recursion
- Inorder, preorder, and postorder traversals
- Case-insensitive string comparison

## Test Cases
| Test case | Inserted names | Operation | Expected result |
|---|---|---|---|
| Empty tree | None | Traverse/search | Program reports that the tree is not created |
| Basic tree | `Mira`, `Asha`, `Ravi` | Inorder | `Asha Mira Ravi` |
| Search success | `Mira`, `Asha`, `Ravi` | Search `Ravi` | Contact found with phone number |
| Search failure | Same tree | Search `Zoya` | Contact not found |
| One node | `Mira` | All traversals | Each traversal prints `Mira` |

## Sample Input and Output
**Insert contacts in this order:** `Mira`, `Asha`, `Ravi`.

**Inorder output**
```text
Asha Mira Ravi
```

**Preorder output**
```text
Mira Asha Ravi
```

**Postorder output**
```text
Asha Ravi Mira
```

**Search**
```text
Enter contact name to search: Ravi
Contact found
Name: Ravi
Phone: 9000000003
```

## Time Complexity
Let `h` be the height of the tree:
- Insert/search: **O(h)**; average **O(log n)** for a reasonably balanced tree, worst-case **O(n)**.
- Each full traversal: **O(n)**.

## Space Complexity
**O(n)** for the nodes. Recursive operations use **O(h)** call-stack space.

## Conclusion
A BST organises names according to a comparison rule, enabling searching and sorted output through inorder traversal. Performance depends on the tree's height.
