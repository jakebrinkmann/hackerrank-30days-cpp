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

## Additional Resources

* [Intro to pointers in C++](https://www.youtube.com/watch?v=h-HBipu_1P0)
* [Linked Lists Introduction](https://www.youtube.com/watch?v=o5wJkJJpKtM)
* [Pointers - C++ Tutorial](http://www.cplusplus.com/doc/tutorial/pointers/)
* [Lesson 15: Singly linked lists in
  C++](http://www.cprogramming.com/tutorial/lesson15.html)

  In memory it is often described as looking like this:

        ----------        ----------
        - Data   -        - Data   -
        ----------        ----------
        - Pointer- - - -> - Pointer-
        ----------        ----------

* [C++ Dynamic
  Memory](http://www.tutorialspoint.com/cplusplus/cpp_dynamic_memory.htm)

## Lessons Learned

Finally it became apparent that my local variable `n` was being created, and I
could "point" to it with the `head` pointer. However, since it was only a
locally defined variable, it was being placed on the **STACK** instead of the
**HEAP**, which meant that as soon as the function returned, the data was being
messed with by the operating system (because, it was no longer allocated to my
program).

The solution was to force `n` to be dynamically allocated at run-time by using
the `new` keyword. Using `Node* n = new Node(data)` meant that the memory would
be kept until I explicitly deleted it. This way, when I'm keeping track of the
pointers to my data, that data would remain in the same place, and any
subsequent instances would be created in _new_ memory locations... the irony...

