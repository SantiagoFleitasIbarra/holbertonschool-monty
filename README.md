
# C - Stacks, Queues - LIFO, FIFO


About: In the project a simple interpreter for Monty ByteCodes was created. What the interpreter does is it reads a bytecode file and executes the bytecode commands.

The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it.

Monty byte code files
Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument: examples

## Objectives

- To know what LIFO and FIFO mean
- To know what a stack is, and when to use it
- To know what a queue is, and when to use it
- To know the common implementations of stacks and queues
- To know the most common use cases of stacks and queues
- To know the proper way to use global variables

## General requirements

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You allowed to use a maximum of one global variable
No more than 5 functions per file
You are allowed to use the C standard library
The prototypes of all your functions should be included in your header file called monty.h
Don’t forget to push your header file
All your header files should be include guarded
You are expected to do the tasks in the order shown in the project

## Compilation & Output

Your code will be compiled this way:

$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
