## Bitwise operators and their *uses*

Bitwise operators in C are powerful tools that allow you to manipulate data at the binary level. They operate directly on the binary representations of integers, making them highly efficient for certain tasks. Below, I’ll explain bitwise operators in detail and share some useful tricks and techniques for programming.

---

### **Bitwise Operators in C**

1. **Bitwise AND (`&`)**:
   - Performs a logical AND operation on each pair of corresponding bits.
   - Result is `1` only if both bits are `1`; otherwise, it’s `0`.
   - Example:
     ```c
     int a = 5;  // Binary: 0101
     int b = 3;  // Binary: 0011
     int result = a & b; // Binary: 0001 (Decimal: 1)
     ```

2. **Bitwise OR (`|`)**:
   - Performs a logical OR operation on each pair of corresponding bits.
   - Result is `1` if at least one of the bits is `1`; otherwise, it’s `0`.
   - Example:
     ```c
     int a = 5;  // Binary: 0101
     int b = 3;  // Binary: 0011
     int result = a | b; // Binary: 0111 (Decimal: 7)
     ```

3. **Bitwise XOR (`^`)**:
   - Performs a logical XOR (exclusive OR) operation on each pair of corresponding bits.
   - Result is `1` if the bits are different; otherwise, it’s `0`.
   - Example:
     ```c
     int a = 5;  // Binary: 0101
     int b = 3;  // Binary: 0011
     int result = a ^ b; // Binary: 0110 (Decimal: 6)
     ```

4. **Bitwise NOT (`~`)**:
   - Inverts all the bits of the operand (flips `0` to `1` and `1` to `0`).
   - Example:
     ```c
     int a = 5;  // Binary: 0101
     int result = ~a; // Binary: 1010 (Decimal: -6, assuming 4-bit representation)
     ```

5. **Left Shift (`<<`)**:
   - Shifts the bits of the left operand to the left by the number of positions specified by the right operand.
   - Fills the vacated bits with `0`.
   - Equivalent to multiplying by \(2^n\) (where \(n\) is the number of shifts).
   - Example:
     ```c
     int a = 5;  // Binary: 0101
     int result = a << 1; // Binary: 1010 (Decimal: 10)
     ```

6. **Right Shift (`>>`)**:
   - Shifts the bits of the left operand to the right by the number of positions specified by the right operand.
   - Fills the vacated bits with `0` (for unsigned integers) or the sign bit (for signed integers).
   - Equivalent to dividing by \(2^n\) (where \(n\) is the number of shifts).
   - Example:
     ```c
     int a = 5;  // Binary: 0101
     int result = a >> 1; // Binary: 0010 (Decimal: 2)
     ```

---

### **Bitwise Tricks and Techniques**

1. **Check if a Number is Even or Odd**:
   - Use the bitwise AND operator with `1` to check the least significant bit (LSB).
   - If the result is `0`, the number is even; otherwise, it’s odd.
   - Example:
     ```c
     int num = 7;
     if (num & 1) {
         printf("Odd\n");
     } else {
         printf("Even\n");
     }
     ```

2. **Swap Two Numbers Without a Temporary Variable**:
   - Use XOR to swap two numbers without a temporary variable.
   - Example:
     ```c
     int a = 5, b = 10;
     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
     printf("a = %d, b = %d\n", a, b); // a = 10, b = 5
     ```

3. **Check if a Number is a Power of 2**:
   - A number is a power of 2 if it has exactly one bit set in its binary representation.
   - Use the expression `(n & (n - 1)) == 0` to check.
   - Example:
     ```c
     int n = 16;
     if ((n & (n - 1)) == 0) {
         printf("Power of 2\n");
     }
     ```

4. **Count the Number of Set Bits (1s) in a Number**:
   - Use a loop to repeatedly clear the least significant set bit and count the iterations.
   - Example:
     ```c
     int count = 0;
     int num = 29; // Binary: 11101
     while (num) {
         num = num & (num - 1); // Clear the least significant set bit
         count++;
     }
     printf("Number of set bits: %d\n", count); // Output: 4
     ```

5. **Set, Clear, and Toggle a Specific Bit**:
   - Set a bit: Use OR with a mask.
   - Clear a bit: Use AND with the complement of a mask.
   - Toggle a bit: Use XOR with a mask.
   - Example:
     ```c
     int num = 5; // Binary: 0101
     // Set bit 2 (0-based index)
     num |= (1 << 2); // Binary: 0111 (Decimal: 7)
     // Clear bit 0
     num &= ~(1 << 0); // Binary: 0110 (Decimal: 6)
     // Toggle bit 1
     num ^= (1 << 1); // Binary: 0100 (Decimal: 4)
     ```

6. **Extract a Subset of Bits**:
   - Use a mask and the right shift operator to extract specific bits.
   - Example:
     ```c
     int num = 29; // Binary: 11101
     int mask = 0b111; // Binary: 0111
     int subset = (num >> 1) & mask; // Extract bits 1 to 3
     printf("Subset: %d\n", subset); // Output: 6 (Binary: 110)
     ```

7. **Multiply or Divide by Powers of 2**:
   - Use left shift (`<<`) to multiply by \(2^n\).
   - Use right shift (`>>`) to divide by \(2^n\).
   - Example:
     ```c
     int num = 10;
     int multiplied = num << 2; // 10 * 4 = 40
     int divided = num >> 1; // 10 / 2 = 5
     ```

---

### **Advantages of Bitwise Operators**
- **Efficiency**: Bitwise operations are extremely fast because they work directly at the hardware level.
- **Compact Code**: They allow you to perform complex operations in a single line.
- **Low-Level Manipulation**: Essential for tasks like device drivers, cryptography, and compression algorithms.

---

### **Cautions**
- Be mindful of **signed integers** when using right shifts, as the behavior depends on the sign bit.
- Avoid overusing bitwise tricks if they make the code less readable.

