# Minishell

![Minishell](https://img.shields.io/badge/Shell-C-4EAA25?logo=gnubash&logoColor=white)

Welcome to **Minishell**, a minimalist Unix-like shell implementation written in C. This project is a simplified version of a shell, inspired by **bash**, designed to understand the core concepts of command-line interpreters, process management, and system programming.

---

## Table of Contents

1. [Introduction](#introduction)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Built-in Commands](#built-in-commands)
6. [Signal Handling](#signal-handling)
7. [Testing](#testing)
   
---

## Introduction

The **Minishell** project is a journey back to the roots of computing, where developers first sought to create a more human-friendly way to interact with computers. This shell allows users to execute commands, manage processes, and interact with the operating system in a simple yet powerful way.

This project is part of the curriculum at [42 School](https://www.42.fr/), aiming to deepen understanding of system programming, process management, and the Unix environment.

---

## Features

- **Interactive Prompt**: Displays a prompt (`$> `) and waits for user input.
- **Command Execution**: Executes commands using `execve` and searches for executables in the `PATH`.
- **Redirections**:
  - Input redirection (`<`).
  - Output redirection (`>` and `>>` for append mode).
  - Heredoc (`<<`).
- **Pipes**: Supports command pipelines using the `|` operator.
- **Environment Variables**: Expands `$VAR` and `$?` (exit status of the last command).
- **Signal Handling**: Handles `ctrl-C`, `ctrl-D`, and `ctrl-\` like `bash`.
- **Built-in Commands**:
  - `echo` (with `-n` option).
  - `cd` (change directory).
  - `pwd` (print working directory).
  - `export` (set environment variables).
  - `unset` (unset environment variables).
  - `env` (print environment variables).
  - `exit` (exit the shell).

---

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/minishell.git
   cd minishell
2. Compile the project using the provided Makefile:
   ```bash
   make
3. Run the Minishell:
   ```bash
   ./minishell

---

## Usage
Once the Minishell is running, you can type commands just like in a regular shell. For example:
  ```bash
    $> ls -la
    $> echo "Hello, World!"
    $> cat < file.txt
    $> ls | grep .c
    $> exit
  ```

## Built-in Commands

- **`echo`**: Prints arguments to stdout. Supports the `-n` option to omit the trailing newline.
- **`cd`**: Changes the current directory. Supports relative and absolute paths.
- **`pwd`**: Prints the current working directory.
- **`export`**: Sets or updates environment variables.
- **`unset`**: Unsets environment variables.
- **`env`**: Prints all environment variables.
- **`exit`**: Exits the shell with an optional status code.

---

## Signal Handling

- **`ctrl-C`**: Interrupts the current command and displays a new prompt.
- **`ctrl-D`**: Exits the shell.
- **`ctrl-\`**: Does nothing (as in `bash`).

---

## Testing

To ensure the correctness of your Minishell, you can create test scripts or use the following commands:
```bash
# Test command execution
$> /bin/ls

# Test pipes
$> ls | grep .c | wc -l

# Test redirections
$> cat < file.txt > output.txt

# Test environment variables
$> export MY_VAR="Hello"
$> echo $MY_VAR

# Test built-ins
$> cd /path/to/dir
$> pwd
$> exit

