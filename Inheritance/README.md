# Day 12: Inheritance

Given two classes, `Person` and `Student`, `Person` is the base class and
`Student` is the derived class. Complete the `Student` class constructor and
add a `char calculate()` method.

1- `Student` class constructor has 4 parameters:

+ `string firstName`
+ `string lastName`
+ `int id`
+ `vector<int> scores()`

2- `char calculate()` calculates a `Student` object's average and returns the
 grade character representative:

+ O - 90-100
+ E - 80-90
+ A - 70-80
+ P - 55-70
+ D - 40-55
+ T - <40

The first line contains `firstName`, `lastName`, and `id`, respectively. The
second line contains the number of test scores. The third line of space-
separated integers describes `scores`.

## Sample input

    Heraldo Memelli 8135627
    2
    100 80

## Sample Output

    Heraldo Memelli 8135627
    2
    100 80

