# Libft

## Your very first own library

> Summary:
>
> This project is about coding a C library.
> 
> It will contain a lot of general purpose functions your programs will rely upon.

## Document
[Libft.pdf](https://github.com/leandroballa/42AdelaideSchool/blob/main/Libft/Libft.pdf)

# About C & Makefile

## Makefile

A Makefile is a special file used to automate the compilation and linking of a program written in the C programming language. It specifies the dependencies between the source code files and the executable program, as well as the rules for compiling and linking the program.

In a Makefile, you define the target executable and specify the dependencies for each source code file, along with the commands to compile and link the code. Make, a build automation tool, uses the Makefile to determine which files have changed since the last build, and recompiles only the necessary files to rebuild the executable.

Makefiles can simplify the build process and reduce the risk of errors when compiling large or complex programs. They can also be customized to incorporate additional features such as unit testing, debugging, and code profiling. In addition, Makefiles can be used with other programming languages and build tools, making them a versatile tool for managing software development projects.
  
## Typyes of files
* .c files - These are the source code files that contain the actual C code that you write. They usually have a .c extension.
* .o files - These are object files that are generated when you compile the source code files. They contain machine code that is specific to your system and can be linked together to create an executable program. They usually have a .o extension on Unix/Linux systems, but may have a .obj extension on Windows systems.
* .a files - These are archive files that contain a collection of object files. They are often used to create reusable libraries that can be linked into multiple programs. They usually have a .a extension on Unix/Linux systems, but may have a .lib extension on Windows systems.

## Compiler (GCC)
* GCC
* -WALL -WEXTRA -WERROR
* -c
* ar -rc
