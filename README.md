# Holberton School Simple Shell Project

<<<<<<< HEAD
## Mandatory Tasks

### Task 0. README, man, AUTHORS

- Write a README.
- Write a man page for your shell.
- Include an AUTHORS file listing all contributors.
=======
## Table of Contents

- [Objective](#objective)
- [Description](#description)
- [Requirements](#requirements)
- [Compilation command](#compilation-command)
- [Mandatory Tasks](#mandatory-tasks)
- [Flowchart](#flowchart)
- [MAN page](#man-page)
- [Installation](#installation)
- [Thanks](#thanks)
- [Authors](#authors)

## Objective

Write a simple UNIX command language interpreter.

## Description

The "C - Simple Shell" project is about creating our own simplified version of the [shell]. Shell is a program taking commands from the keyboard and giving them to the operating system to perform.
>>>>>>> 7b2305ef30108fad57d4f505923cbd898eb142a1

### Task 1. Betty would be proud

<<<<<<< HEAD
Write code that passes the Betty style checks.

### Task 2. Simple shell 0.1

=======
## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS
- Code must follow the Betty style
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your shell should not have any memory leaks
- No more than 5 functions per file
- No more than functions per file
- All your header files should be include guarded

## Compilation command

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## Mandatory Tasks

### Task 0. README, man, AUTHORS

Write a README
Write a man for your shell.
You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository.

### Task 1. Betty would be proud

Write a beautiful code that passes the Betty checks.

### Task 2. Simple shell 0.1

>>>>>>> 7b2305ef30108fad57d4f505923cbd898eb142a1
Write a UNIX command line interpreter.

**Usage:**
```bash
bash
./hsh
<<<<<<< HEAD

# Holberton School Simple Shell Project

## Mandatory Tasks

### Task 0. README, man, AUTHORS

- Write a README.
- Write a man page for your shell.
- Include an AUTHORS file listing all contributors.

### Task 1. Betty would be proud

Write code that passes the Betty style checks.

### Task 2. Simple shell 0.1

Write a UNIX command line interpreter.

**Usage:**
```bash
bash
./hsh

```exit

You don’t have to handle any argument to the built-in exit.

Task 6. Simple shell 1.0
Simple shell 0.4 + Implement the env built-in that prints the current environment.

MAN page: Run man ./man_1_simple_shell

Installation
To install and run Simple Shell, follow these steps:

Clone the repository:
git clone https://github.com/boughanmiyoussef/holbertonschool-simple_shell

Navigate to the cloned directory.
Compile the program:
=======
Your Shell should:
Display a prompt and wait for the user to type a command. A command line always ends with a new line.
The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
The command lines are made only of one word. No arguments will be passed to programs.
If an executable cannot be found, print an error message and display the prompt again.
Handle errors.
You have to handle the “end of file” condition (Ctrl+D)
You don’t have to:
use the PATH
implement built-ins
handle special characters : ", ', `, , *, &, #

### Task 3. Simple shell 0.2

Simple shell 0.1 +
Handle command lines with arguments

### Task 4. Simple shell 0.3

Simple shell 0.2 +
Handle the PATH
fork must not be called if the command doesn’t exist

### Task 5. Simple shell 0.4

Simple shell 0.3 +
Implement the exit built-in, that exits the shell

Usage: exit
You don’t have to handle any argument to the built-in exit

### Task 6. Simple shell 1.0

Simple shell 0.4 +
Implement the env built-in, that prints the current environment

## MAN page

Run man ./man_1_simple_shell

## Installation

Install and run:
To install and run Simple Shell, follow these steps:

Clone the repository using the following command:

git clone https://github.com/boughanmiyoussef/holbertonschool-simple_shell
Navigate to the directory where the repository was cloned.
Compile the program by running the following command:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o .hsh
Run the program by typing the following command:
>>>>>>> 7b2305ef30108fad57d4f505923cbd898eb142a1

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

Run the program:
./hsh

<<<<<<< HEAD
Using the Simple Shell
=======
## Using the Simple Shell:

>>>>>>> 7b2305ef30108fad57d4f505923cbd898eb142a1
To use our Simple Shell, type a command and press Enter.

The program will execute the command and display the output on the screen.

Here are some examples of commands that you can run:

ls: list the contents of the current directory.
pwd: print the path of the current working directory.
echo: display a message on the screen.
mkdir: create a new directory.
exit: exit the shell.
<<<<<<< HEAD
Thanks
Many warm thanks to all the Holberton School peers who helped and brought joy throughout the many challenges of this project.
=======

## Thanks

Many warm thanks to all the Holberton School peers who helped and brought joy throughout the many challenges of this project.

## Flowchart

![Simple Shell Flowchart]
(https://github.com/boughanmiyoussef/holbertonschool-simple_shell/blob/main/resources/C%20-%20Simple%20shell%20flowchart.png)

```
>>>>>>> 7b2305ef30108fad57d4f505923cbd898eb142a1
