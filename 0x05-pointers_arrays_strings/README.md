# More pointers, arrays, and strings

## Requirements
* Language: C
* OS: Ubuntu 14.04 LTS
* Compiler: gcc 4.8.4
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Synopsis
This repository holds some projects I worked on for Holberton School. The goal is to learn coding and concepts through the C programming language.

## Concepts to be learned in this repository:
* pointers
* arrays
* strings

## Description of what each file does:
0. function that takes a pointer to an int as parameter and updates the value it points to to 98.
1. function that swaps the values of two integers.
2. function that returns the length of a string.
3. function that prints a string, followed by a new line, to stdout.
4. function that prints a string, in reverse, followed by a new line.
5. function that reverses a string.
6. function that prints every other character of a string, starting with the first character, followed by a new line.
7. function that prints half of a string, followed by a new line.
8. function that prints n elements of an array of integers, followed by a new line.
9. function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
100.  function that convert a string to an integer.
   - Prototype: int _atoi(char *s);
   - The number in the string can be preceded by an infinite number of characters
   - You need to take into account all the - and + signs before the number
   - If there are no numbers in the string, the function must return 0
   - not allowed to use long
   - not allowed to declare new variables of “type” array
   - not allowed to hard-code special values
101. program that generates random valid passwords for the program 101-crackme.
    - You are allowed to use the standard library
    - You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
    - man srand, rand, time
    - gdb and objdump can help
 