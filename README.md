# Bitwise-Operations-in-C++
Experiment No.: 4
Name: Bitwise Operation in C++
Program 1:
This C++ program demonstrates various bitwise operations using two integers `a = 5` and `b = 3`. It covers:
- Bitwise AND (`&`)
- Bitwise OR (`|`)
- Bitwise XOR (`^`)
- Bitwise NOT (`~`)
- Left Shift (`<<`)
- Right Shift (`>>`)
Thoery:
Bitwise operators in C++ operate at the bit level of data. They are useful for low-level programming, such as device control, encryption, graphics, and performance optimizations.

For integers:
- `a = 5` → binary: `0101`
- `b = 3` → binary: `0011`

 Bitwise Operation Summary:
- AND (`&`): 1 only if both bits are 1
- OR (`|`): 1 if at least one bit is 1
- XOR (`^`): 1 if bits are different
- NOT (`~`): Flips all bits (1’s complement)
- Left Shift (`<<`): Shifts bits left, multiplying the number by 2 for each shift
- Right Shift (`>>`): Shifts bits right, dividing the number by 2 for each shift
Algorithm:
Step 1. Start the program.
Step 2. Initialize two integers `a = 5`, `b = 3`.
Step 3. Perform bitwise AND, OR, XOR.
Step 4. Perform bitwise NOT on both `a` and `b`.
Step 5. Perform left and right shift by 1 on both numbers.
Step 6. Display the results.
Step 7. End the program.

Program 2:
This C++ program accepts two integer inputs from the user and performs two fundamental bitwise operations:
- Bitwise AND (`&`)
- Bitwise OR (`|`)

It displays the results based on the bitwise manipulation of the entered values.
Theory:
Bitwise operators operate at the binary level of integers:
- Bitwise AND (`&`): Compares each bit of two numbers and returns 1 if both bits are 1.
- Bitwise OR (`|`): Compares each bit and returns 1 if at least one bit is 1.

These operations are often used in low-level programming, bitmasking, hardware interfacing, and optimization.
ALgorithm:
Step 1. Start the program.
Step 2. Prompt the user to input two integers.
Step 3. Perform bitwise AND operation and display the result.
Step 4. Perform bitwise OR operation and display the result.
Step 5. End the program.

Conclusion:
In Program 1, we explored various bitwise operations (AND, OR, XOR, NOT, Left Shift, Right Shift) on two predefined integers. This helped us understand how data is manipulated at the binary level using bitwise operators.

In Program 2, we accepted two numbers as user input and performed bitwise AND and bitwise OR operations. This reinforced the concept of interactive bitwise computation and gave practical insight into how these operations behave with different values.

Together, both programs deepened our understanding of:

Binary representation of integers

Use of bitwise operators for low-level computation

Efficient manipulation of bits in programming

These concepts are fundamental for tasks like hardware programming, embedded systems, encryption, and performance optimization in system-level applications.
