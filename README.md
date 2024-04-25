# Simple Shell Project

## Overview
This project involves creating a simple UNIX command line interpreter in C.

## Mandatory Tasks

### Task 0: README, man, AUTHORS
- Write a README
- Write a man page for the shell
- Create an AUTHORS file

### Task 1: Betty would be proud
Write code that passes the Betty style checks.

### Task 2: Simple shell 0.1
Write a UNIX command line interpreter.

#### Usage:
bash
./hsh

- Display a prompt and wait for user input.
- Display the prompt again after each command.
- Handle simple commands without advanced features.
- Print an error message if an executable is not found.
- Handle errors and the end-of-file condition (Ctrl+D).

### Task 3: Simple shell 0.2
Simple shell 0.1 + Handle command lines with arguments.

### Task 4: Simple shell 0.3
Simple shell 0.2 + Handle the PATH. Avoid calling fork if the command doesn’t exist.

### Task 5: Simple shell 0.4
Simple shell 0.3 + Implement the exit built-in to exit the shell.

#### Usage:
exit

No arguments are required for the exit built-in.

### Task 6: Simple shell 1.0
Simple shell 0.4 + Implement the env built-in to print the current environment.

## MAN page
Run `man ./man_1_simple_shell`.

## Installation
1. Clone the repository:
git clone https://github.com/boughanmiyoussef/holbertonschool-simple_shell
2. Navigate to the cloned directory.
3. Compile the program:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
4. Run the program:
./hsh

## Using the Simple Shell
Type a command and press Enter. The program will execute the command and display the output.

Examples of commands:
- ls: list the contents of the current directory.
- pwd: print the path of the current working directory.
- echo: display a message on the screen.
- mkdir: create a new directory.
- exit: exit the shell.

## Thanks
Many thanks to all the Holberton School peers who contributed to this project.

## Flowchart
![Simple Shell Flowchart](https://github.com/boughanmiyoussef/holbertonschool-simple_shell/blob/main/resources/C%20-%20Simple%20shell%20flowchart.png)
