Some programming examples in C and C++
===========================

## Contents

1. [Solutions for coding problems](#solutions-for-coding-problems)

## Compiling and running C++ program via command line
```sh
g++ program.cpp -o program
./program
```

## Solutions for coding problems

1. Problem #1 [Easy]: Given a list of numbers and a number k, return whether any two numbers from the list add up to k. 
	* For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17. 
	* Bonus: Can you do this in one pass?

	a. Solution (C++) [verify_if_two_numbers_in_a_list_add_up_to_k.cpp](https://github.com/ramonfigueiredopessoa/c_and_cplusplus_programming/blob/master/solutions_for_coding_problems/verify_if_two_numbers_in_a_list_add_up_to_k.cpp)

2. Problem #2 [Hard]: Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

	* For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].
	* Follow-up: what if you can't use division?

	a. Solution (C++) [array_with_the_product_of_all.cpp](https://github.com/ramonfigueiredopessoa/c_and_cplusplus_programming/blob/master/solutions_for_coding_problems/array_with_the_product_of_all.cpp)

Go back to [Contents](#contents).