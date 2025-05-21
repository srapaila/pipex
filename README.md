<h1 align="center">🔗 pipex</h1>
<p align="center">
  <i>Implementing a simple pipeline in C</i>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg" />
  <img src="https://img.shields.io/badge/Project-42%20School-darkblue" />
</p>

---

## 📘 About the Project

**pipex** is a project from the [42 School] curriculum where we implement a simplified version of a shell's piping functionality, handling multiple processes connected via pipes.

### What You'll Learn:
- Managing **pipes** in C with `pipe()`.
- Creating child processes using `fork()`.
- Redirecting input/output with `dup2()`.
- Handling **basic shell-like piping**.
- Working with **file descriptors**.
- Writing modular, efficient code.

---

## 🧠 Project Goals

The goal of the **pipex** project is to emulate the piping functionality in a shell. You are asked to:
- Take two commands as input.
- Execute the commands, with the first one writing to the pipe and the second one reading from it.

Your program should:
- Execute two commands passed as arguments to the program.
- Connect the two commands using pipes.
- Redirect the output of the first command to the input of the second command.
- Handle edge cases (e.g., file not found, incorrect arguments).
- Support both absolute and relative paths for the commands.

The program should run like this:

```bash
./pipex infile "command1" "command2" outfile
