# 0X09-Static_Libraries
### INTRODUCTION
In this topic, we were taught about C libraries, the two types of C libraries(Static libraries and Shared libraries), and the usage of some commands.
## LIBRARIES IN C
In C programming, a library is a collection of precompiled functions and routines that can be used by other programs or it could also be known as a file containing several object files, that can be used as a single entity in a linking phase of a program. Libraries are an essential part of modular programming, allowing developers to reuse code and avoid duplicating efforts. Normally, the library is indexed, so it is easy to find symbols (functions, variables, and so on)in them. For this reason, linking a program whose object files are ordered in libraries is faster than linking a program whose object files are separate on a disk. Libraries speeds up linking and save space.
There are two main types of libraries in C: static libraries and dynamic libraries.
### 1. Static Libraries
: a static library is a collection of object files(compiled codes) packaged into a single archive file. the archive file typically has a `.a` extension on Unix-like systems (e.g`libutil.a`) or a `.lib` extension on Windows.
- When you link a program with a static library, the entire code from the library is included in the executable at compile tine. This means that the compiled program contains a copy of all the functions from the library that it uses.
- Creating and using a static library involves the following steps:
    - compilation of source files into object files (`gcc -c file1.c file2.c`).
    - archiving the object files into a static library (`ar rcs libutil.a file1.o file2.o`)
Here's the breakdown of the options used with the `ar` command:
      - `r`: Replace or add files to the archive.
      - `c`: Create the archive if it does not exist.
      - `s`: Write an index for the archive.
When we use `ar rcs`, we are telling `ar` to replace or add files to the archive, create the archive if it doesnt exist, and write an index for the archive. The index helps in quickly locating symbols (functions, variables etc) when linking programs with the archive.
 In the context of the code above, the command replaces or adds `file1.o` and `file2.o` to the static library `libutil.a` and generates an index for the archive. The index improves the efficinecy of searching for symbols within the archive. 
    - linking the program with the static library using a special flag, usually `-l` (`cc main.o -L. -lutil -o prog`)
### 2. Dynamic Libraries(Shared Libraries)
: A dynamic library is a separate file containing compiled code that is loaded into memory at runtime when a program is executed. Dynamic libraries have a `.so` extension on Unix-like systems(e.g., `libutil.so`) or a `.dil` extensions on Windows.
