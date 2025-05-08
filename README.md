# 🛠️ Simple Unix Utilities in C

This repository implements basic versions of common Unix command-line utilities in the C programming language. Each utility is built to replicate the core behavior of its Unix counterpart using system calls and standard library functions.

## ✅ Implemented Utilities

| Command | Description |
|--------|-------------|
| `pwd`  | Prints the current working directory using `getcwd()` |
| `echo` | Prints a string passed as command-line arguments |
| `cp`   | Copies a file to a specified destination |
| `mv`   | Moves or renames a file to a specified path or name |

---

## 📂 File Structure

Each utility is implemented in a separate C file:
├── pwd.c
├── echo.c
├── cp.c
├── mv.c
└── README.md

## 🧪 Example Usage

After compiling, the utilities can be used like this:

$ ./pwd
/home/username/projects/unix-utils

$ ./echo Hello World
Hello World

$ ./cp file.txt /tmp/file_copy.txt

$ ./mv /tmp/file_copy.txt ~/file.txt


## 🧪 compilation

Use gcc to compile each program individually:

$gcc -o mypwd mypwd.c
$gcc -o myecho myecho.c
$gcc -o mycp mycp.c
$gcc -o mymv mymv.c
