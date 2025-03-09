## Tricks
 Bitwise operations are incredibly versatile and can be used to solve a wide range of problems efficiently. Below are **more advanced tricks and techniques** using bitwise operations that can be applied in programming:

---

### **1. Check if Two Numbers Have Opposite Signs**
   - Use XOR (`^`) to check if the sign bits of two numbers are different.
   - If the result is negative, the numbers have opposite signs.
   - Example:
     ```c
     int a = 10, b = -5;
     if ((a ^ b) < 0) {
         printf("Opposite signs\n");
     }
     ```

---

### **2. Find the Absolute Value of a Number Without Branching**
   - Use bitwise operations to compute the absolute value of a number.
   - Works for both positive and negative integers.
   - Example:
     ```c
     int num = -10;
     int mask = num >> (sizeof(int) * 8 - 1); // Mask is 0 for positive, -1 for negative
     int abs_value = (num + mask) ^ mask; // Absolute value
     printf("Absolute value: %d\n", abs_value);
     ```

---

### **3. Find the Minimum or Maximum of Two Numbers Without Branching**
   - Use bitwise operations to avoid conditional statements.
   - Example for minimum:
     ```c
     int a = 10, b = 5;
     int min = b ^ ((a ^ b) & -(a < b)); // min = 5
     ```
   - Example for maximum:
     ```c
     int max = a ^ ((a ^ b) & -(a < b)); // max = 10
     ```

---

### **4. Reverse the Bits of a Number**
   - Reverse the binary representation of a number using bitwise operations.
   - Example:
     ```c
     unsigned int num = 13; // Binary: 1101
     unsigned int reversed = 0;
     int bits = sizeof(num) * 8;
     for (int i = 0; i < bits; i++) {
         reversed <<= 1; // Shift left to make room for the next bit
         reversed |= (num & 1); // Add the LSB of num to reversed
         num >>= 1; // Shift num right to process the next bit
     }
     printf("Reversed: %u\n", reversed); // Output: 2952790016 (Binary: 10110000000000000000000000000000)
     ```

---

### **5. Check if a Number is a Multiple of 4**
   - A number is a multiple of 4 if its last two bits are `00`.
   - Use the expression `(num & 3) == 0`.
   - Example:
     ```c
     int num = 16;
     if ((num & 3) == 0) {
         printf("Multiple of 4\n");
     }
     ```

---

### **6. Find the Next Power of 2**
   - Compute the next power of 2 greater than or equal to a given number.
   - Example:
     ```c
     unsigned int num = 10;
     num--; // Handle the case where num is already a power of 2
     num |= num >> 1;
     num |= num >> 2;
     num |= num >> 4;
     num |= num >> 8;
     num |= num >> 16;
     num++;
     printf("Next power of 2: %u\n", num); // Output: 16
     ```

---

### **7. Count Trailing Zeros in a Number**
   - Count the number of trailing zeros (LSB to the first set bit) in a number.
   - Example:
     ```c
     int num = 16; // Binary: 10000
     int count = 0;
     while ((num & 1) == 0) {
         count++;
         num >>= 1;
     }
     printf("Trailing zeros: %d\n", count); // Output: 4
     ```

---

### **8. Find the Parity of a Number**
   - Parity is `1` if the number of set bits is odd, otherwise `0`.
   - Use XOR to compute parity efficiently.
   - Example:
     ```c
     int num = 13; // Binary: 1101
     int parity = 0;
     while (num) {
         parity ^= 1;
         num = num & (num - 1); // Clear the least significant set bit
     }
     printf("Parity: %d\n", parity); // Output: 1 (odd parity)
     ```

---

### **9. Swap Adjacent Bits**
   - Swap every pair of adjacent bits in a number.
   - Example:
     ```c
     unsigned int num = 0b101010; // Binary: 101010
     unsigned int swapped = ((num & 0xAAAAAAAA) >> 1) | ((num & 0x55555555) << 1);
     printf("Swapped: %u\n", swapped); // Output: 0b010101 (Binary: 010101)
     ```

---

### **10. Find the Position of the Most Significant Set Bit**
   - Find the position of the highest set bit in a number.
   - Example:
     ```c
     int num = 18; // Binary: 10010
     int pos = 0;
     while (num >>= 1) {
         pos++;
     }
     printf("Position of MSB: %d\n", pos); // Output: 4
     ```

---

### **11. Generate a Mask for the First N Bits**
   - Create a mask with the first `n` bits set to `1`.
   - Example:
     ```c
     int n = 5;
     int mask = (1 << n) - 1; // Binary: 11111
     printf("Mask: %d\n", mask); // Output: 31
     ```

---

### **12. Check if All Bits Are Set**
   - Check if all bits in a number are set to `1`.
   - Example:
     ```c
     unsigned int num = 0xFFFFFFFF; // All bits set
     if (num == ~0) {
         printf("All bits are set\n");
     }
     ```

---

### **13. Find the Number of Bits Required to Represent a Number**
   - Calculate the number of bits required to represent a number in binary.
   - Example:
     ```c
     int num = 18; // Binary: 10010
     int bits = 0;
     while (num) {
         bits++;
         num >>= 1;
     }
     printf("Bits required: %d\n", bits); // Output: 5
     ```

---

### **14. Rotate Bits**
   - Rotate the bits of a number to the left or right.
   - Example for left rotation:
     ```c
     unsigned int num = 0b1101; // Binary: 1101
     int n = 2; // Rotate left by 2 bits
     int bits = sizeof(num) * 8;
     unsigned int rotated = (num << n) | (num >> (bits - n));
     printf("Rotated: %u\n", rotated); // Output: 0b0111 (Binary: 0111)
     ```

---

### **15. Find the XOR of All Numbers from 1 to N**
   - Compute the XOR of all numbers from `1` to `N` efficiently.
   - Example:
     ```c
     int n = 5;
     int xor_result = 0;
     switch (n % 4) {
         case 0: xor_result = n; break;
         case 1: xor_result = 1; break;
         case 2: xor_result = n + 1; break;
         case 3: xor_result = 0; break;
     }
     printf("XOR from 1 to %d: %d\n", n, xor_result); // Output: 1
     ```

---

### **Key Takeaways**
- Bitwise operations are **fast** and **memory-efficient**.
- They are widely used in **low-level programming**, **cryptography**, **compression**, and **optimization**.
- Always consider **edge cases** and **signed/unsigned behavior** when using bitwise tricks.
