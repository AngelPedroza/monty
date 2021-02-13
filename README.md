# 0x19. C - Stacks, Queues - LIFO, FIFO

## What is this?
A project for Holberton School, this is an interpreter for Monty bytecodes files. Monty is a scripting language that is first compiled into Monty byte codes. It relies on a unique stack data structure with specific instructions to manipulate it. Monty byte codes usually have the .m extension.

## Description
What you should learn from this project:

* What do LIFO and FIFO mean
* What is a stack, and when to use it
* What is a queue, and when to use it
* What are the common implementations of stacks and queues
* What are the most common use cases of stacks and queues
* What is the proper way to use global variables

### Compilation
The files are to be compiled this way:
```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
### How to use
1. compile files
2. `$ ./monty monty_byte_code_file_name.m`

### Example of usage
```
$ cat bytecodes/12.m
push 1
push 2
push 3
pall
add
pall
$ ./monty bytecodes/12.m
3
2
1
5
1
```
---

### [0. push, pall](./1000-holberton.bf)
* Implement the push and pall opcodes.


### [1. pint](./1001-add.bf)
* Implement the pint opcode.


### [2. pop](./1002-mul.bf)
* Implement the pop opcode.


### [3. swap](./1003-mul.bf)
* Implement the swap opcode.

---

## Author
* **Angel Pedroza** - [AngelPedroza](https://github.com/AngelPedroza)
* **Cristian Hurtado** - [Cristian Hurtado](https://github.com/cristian0497)
