# Day 11: 2D Arrays

Given a 6x6 2D Array, `A`, there are 16 "hourglasses" in `A`, and an _hourglass
sum_ is the sum of the hourglass' values.

Calculate the hourglass sum for every hourglass in A, then print the maximum
hourglass sum.

## Sample input

    1 1 1 0 0 0
    0 1 0 0 0 0
    1 1 1 0 0 0
    0 0 2 4 4 0
    0 0 0 2 0 0
    0 0 1 2 4 0

## Sample output

    19

## Context

Define an hourglass in `A` to be a subset of values with indices falling in
this pattern in `A`'s graphical representation:

    a b c
      d
    e f g

