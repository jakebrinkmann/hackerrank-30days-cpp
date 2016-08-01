# Day 13: Abstract Classes

Given a `Book` class and a `Solution` class, write a `MyBook` class that does
the following:

* Inherits from `Book`
* Has a parameterized constructor taking these parameters:
  * `string title`
  * `string author`
  * `int price`
* Implements the Book class' abstract display() method so it prints these lines:
  * `Title:`, a space, and then the current instance's `title`.
  * `Author:`, a space, and then the current instance's `author`.
  * `Price:`, a space, and then the current instance's `price`.

## Sample input

    The Alchemist
    Paulo Coelho
    248

## Sample output

    Title: The Alchemist
    Author: Paulo Coelho
    Price: 248

## Additional resources

[C++ Abstract Base
Classes](http://www.cplusplus.com/doc/tutorial/polymorphism/#abstract_base_classes)

