# Keywords :3
---
Keywords are an essential part of the C programming language. They are reserved words that have special meanings and are used to define the structure and behavior of a program. Unlike identifiers, which are created by the programmer, keywords are predefined by the language and cannot be used for any other purpose (e.g., as variable names, function names, etc.).

---

### What Are Keywords in C?
- Keywords are **reserved words** that have specific meanings and functions in the C language.
- They are used to define the syntax and structure of the program.
- There are **32 keywords** in the standard C language (as per the ANSI C standard).

---

### List of Keywords in C
Here is the complete list of C keywords:

| Keywords       | Description                                                                 |
|----------------|-----------------------------------------------------------------------------|
| `auto`         | Declares automatic (local) variables.                                       |
| `break`        | Exits a loop or switch statement.                                           |
| `case`         | Defines a label in a switch statement.                                      |
| `char`         | Declares a character variable.                                              |
| `const`        | Declares a constant value.                                                  |
| `continue`     | Skips the current iteration of a loop.                                      |
| `default`      | Defines the default case in a switch statement.                             |
| `do`           | Starts a do-while loop.                                                     |
| `double`       | Declares a double-precision floating-point variable.                        |
| `else`         | Defines the alternative path in an if-else statement.                       |
| `enum`         | Declares an enumerated type.                                                |
| `extern`       | Declares a global variable or function defined elsewhere.                   |
| `float`        | Declares a floating-point variable.                                         |
| `for`          | Starts a for loop.                                                          |
| `goto`         | Jumps to a labeled statement.                                               |
| `if`           | Starts a conditional statement.                                             |
| `int`          | Declares an integer variable.                                               |
| `long`         | Declares a long integer variable.                                           |
| `register`     | Suggests storing a variable in a CPU register (rarely used).                |
| `return`       | Exits a function and optionally returns a value.                            |
| `short`        | Declares a short integer variable.                                          |
| `signed`       | Declares a signed integer variable.                                         |
| `sizeof`       | Returns the size of a data type or variable.                                |
| `static`       | Declares a static variable or function with internal linkage.               |
| `struct`       | Declares a structure (a user-defined data type).                            |
| `switch`       | Starts a switch statement.                                                  |
| `typedef`      | Creates an alias for a data type.                                           |
| `union`        | Declares a union (a user-defined data type that shares memory).             |
| `unsigned`     | Declares an unsigned integer variable.                                      |
| `void`         | Declares a function with no return value or a pointer with no type.         |
| `volatile`     | Indicates that a variable's value may change unexpectedly (used in hardware programming). |
| `while`        | Starts a while loop.                                                        |

---

### Categories of Keywords
Keywords in C can be broadly categorized based on their functionality:

1. **Data Type Keywords**:
   - Define the type of data a variable can hold.
   - Examples: `int`, `char`, `float`, `double`, `void`, `short`, `long`, `signed`, `unsigned`.

2. **Control Flow Keywords**:
   - Control the flow of execution in a program.
   - Examples: `if`, `else`, `switch`, `case`, `default`, `for`, `while`, `do`, `break`, `continue`, `goto`.

3. **Storage Class Keywords**:
   - Define the scope, visibility, and lifetime of variables.
   - Examples: `auto`, `extern`, `register`, `static`.

4. **Function-Related Keywords**:
   - Used in defining and returning from functions.
   - Examples: `return`, `void`.

5. **User-Defined Data Type Keywords**:
   - Used to create custom data types.
   - Examples: `struct`, `union`, `enum`, `typedef`.

6. **Miscellaneous Keywords**:
   - Serve specific purposes in the language.
   - Examples: `sizeof`, `const`, `volatile`.

---

### Rules for Using Keywords
1. **Reserved Words**:
   - Keywords cannot be used as identifiers (e.g., variable names, function names).
   - Example: `int int;` is invalid because `int` is a keyword.

2. **Case Sensitivity**:
   - Keywords must be written in lowercase. For example, `INT` is not a keyword; `int` is.

3. **No Special Characters**:
   - Keywords cannot contain special characters or spaces.

4. **No Overloading**:
   - Keywords have fixed meanings and cannot be redefined or overloaded.

---

### Examples of Keywords in Use
Here are some examples demonstrating the use of keywords in C programs:

#### 1. Data Type Keywords
```c
int age = 25;
float salary = 50000.50;
char grade = 'A';
```

#### 2. Control Flow Keywords
```c
if (age > 18) {
    printf("You are an adult.\n");
} else {
    printf("You are a minor.\n");
}

for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```

#### 3. Storage Class Keywords
```c
static int count = 0; // Static variable
extern int globalVar; // External variable
```

#### 4. Function-Related Keywords
```c
void printMessage() {
    printf("Hello, World!\n");
    return; // Optional for void functions
}
```

#### 5. User-Defined Data Type Keywords
```c
typedef struct {
    int x;
    int y;
} Point;

Point p1;
p1.x = 10;
p1.y = 20;
```

#### 6. Miscellaneous Keywords
```c
const int MAX_VALUE = 100;
printf("Size of int: %lu\n", sizeof(int));
```

---

### Common Mistakes with Keywords
1. **Using Keywords as Identifiers**:
   - Example: `int return = 10;` is invalid because `return` is a keyword.

2. **Misspelling Keywords**:
   - Example: `flaot salary;` is invalid because `float` is misspelled.

3. **Using Uppercase Keywords**:
   - Example: `INT age;` is invalid because keywords are case-sensitive and must be lowercase.

---

### Summary
- Keywords are reserved words with predefined meanings in C.
- There are **32 keywords** in the standard C language.
- Keywords are used to define data types, control flow, storage classes, functions, and user-defined data types.
- They cannot be used as identifiers or redefined.
- Always write keywords in lowercase and avoid misspelling them.

