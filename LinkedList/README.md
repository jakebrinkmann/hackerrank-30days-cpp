# Day 15: Linked List

A *Node* class is provided, having an integer `data` field and a *Node*
instance pointer `next` pointing to another node (i.e. the next node in a list)

A *Node insert* function is declared, having two parameters: a pointer `head`
pointing to the first node of a linked list, and an integer `data` value that
must be aadded to the end of the list as a new *Node* object

Complete the *instert* function to create a new *Node* (pass `data` as the
*Node* constructor argument) and insert it at the tail of the linked list
referenced by `head` parameter, then return the reference to the `head` node.

## Sample input

First line contains `T` number of test cases. The `T` subsequent lines each
contain an integer to be inserted at the list's tail.

    4
    2
    3
    4
    1

## Sample output

    2 3 4 1

