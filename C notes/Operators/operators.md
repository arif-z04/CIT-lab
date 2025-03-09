# **Operators**
Operators in the C programming language are symbols that perform operations on variables and values. They are fundamental to manipulating data and controlling the flow of a program. Operators in C can be categorized into several types based on their functionality. Let's explore the main categories and their uses:

---

### 1. **Arithmetic Operators**
   - Used to perform basic mathematical operations.
   - Examples:
     - `+` (Addition): Adds two operands.
     - `-` (Subtraction): Subtracts the second operand from the first.
     - `*` (Multiplication): Multiplies two operands.
     - `/` (Division): Divides the first operand by the second.
     - `%` (Modulus): Returns the remainder after division.
   - Example:
     ```c
     int a = 10, b = 3;
     int sum = a + b; // sum = 13
     int remainder = a % b; // remainder = 1
     ```

---

### 2. **Relational Operators**
   - Used to compare two values or expressions.
   - Return `1` (true) or `0` (false).
   - Examples:
     - `==` (Equal to): Checks if two operands are equal.
     - `!=` (Not equal to): Checks if two operands are not equal.
     - `>` (Greater than): Checks if the left operand is greater than the right.
     - `<` (Less than): Checks if the left operand is less than the right.
     - `>=` (Greater than or equal to): Checks if the left operand is greater than or equal to the right.
     - `<=` (Less than or equal to): Checks if the left operand is less than or equal to the right.
   - Example:
     ```c
     int x = 5, y = 10;
     if (x < y) {
         printf("x is less than y\n");
     }
     ```

---

### 3. **Logical Operators**
   - Used to combine multiple conditions.
   - Examples:
     - `&&` (Logical AND): True if both conditions are true.
     - `||` (Logical OR): True if at least one condition is true.
     - `!` (Logical NOT): Inverts the truth value of a condition.
   - Example:
     ```c
     int age = 25;
     if (age >= 18 && age <= 60) {
         printf("You are eligible to work.\n");
     }
     ```

---

### 4. **Assignment Operators**
   - Used to assign values to variables.
   - Examples:
     - `=` (Simple assignment): Assigns the value on the right to the variable on the left.
     - `+=`, `-=`, `*=`, `/=`, `%=` (Compound assignment): Perform an operation and assign the result.
   - Example:
     ```c
     int a = 5;
     a += 3; // Equivalent to a = a + 3; (a becomes 8)
     ```

---

### 5. **Increment and Decrement Operators**
   - Used to increase or decrease the value of a variable by 1.
   - Examples:
     - `++` (Increment): Increases the value by 1.
     - `--` (Decrement): Decreases the value by 1.
   - Can be used as prefix (`++a`) or postfix (`a++`).
   - Example:
     ```c
     int a = 5;
     a++; // a becomes 6
     int b = ++a; // a becomes 7, b becomes 7
     ```

---

### 6. **Bitwise Operators**
   - Used to perform operations on binary representations of data.
   - Examples:
     - `&` (Bitwise AND): Performs AND operation on each bit.
     - `|` (Bitwise OR): Performs OR operation on each bit.
     - `^` (Bitwise XOR): Performs XOR operation on each bit.
     - `~` (Bitwise NOT): Inverts all bits.
     - `<<` (Left shift): Shifts bits to the left.
     - `>>` (Right shift): Shifts bits to the right.
   - Example:
     ```c
     int a = 5; // Binary: 0101
     int b = 3; // Binary: 0011
     int result = a & b; // Binary: 0001 (Decimal: 1)
     ```

---

### 7. **Conditional (Ternary) Operator**
   - A shorthand for an `if-else` statement.
   - Syntax: `condition ? expression1 : expression2`
   - If the condition is true, `expression1` is evaluated; otherwise, `expression2` is evaluated.
   - Example:
     ```c
     int a = 10, b = 20;
     int max = (a > b) ? a : b; // max = 20
     ```

---

### 8. **Special Operators**
   - Examples:
     - `sizeof`: Returns the size of a variable or data type.
     - `,` (Comma operator): Separates two expressions, evaluating them sequentially.
     - `&` (Address-of operator): Returns the memory address of a variable.
     - `*` (Pointer dereference operator): Accesses the value at a memory address.
   - Example:
     ```c
     int a = 10;
     int *ptr = &a; // ptr holds the address of a
     int value = *ptr; // value = 10
     ```

---

### Key Points to Remember:
- Operators have precedence and associativity, which determine the order in which operations are performed.
- Use parentheses `()` to explicitly specify the order of evaluation when needed.
- Operators are essential for controlling program logic, performing calculations, and manipulating data.

