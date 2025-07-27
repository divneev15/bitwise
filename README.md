##  **C++ Experiment 4: Understanding and Using Bitwise Operators**

---

###  **Aim**

To explore **bitwise operators** in C++ and learn how to **set and reset individual bits** of a number.

---

###  **Tool Used**

* Visual Studio Code (VS Code)

---

###  **Objectives**

* Use bitwise operators: `&`, `|`, `^`, `~`, `<<`, `>>`
* Learn how to **set (make 1)** and **reset (make 0)** a specific bit in a number
* Understand the **binary-level manipulation** of data

---

###  **Theory**

#### 🔹 **What are Bitwise Operators?**

Bitwise operators work on the **binary (bit-level)** representation of integers. Unlike arithmetic operators, they manipulate **individual bits** of numbers.

#### 🔹 **Common Bitwise Operators**

| Operator    | Symbol | Description               | Example (`a = 5`, `b = 3`) |             
| ----------- | ------ | ------------------------- | -------------------------- | 
| AND         | `&`    | 1 if both bits are 1      | `5 & 3 = 1`                |             
| OR          |  |     | 1 if any is 1             | 1 if either bit is 1       | 
| XOR         | `^`    | 1 if only one bit is 1    | `5 ^ 3 = 6`                |    
| NOT         | `~`    | Flips all bits            | `~5 = -6`                  |             
| Left Shift  | `<<`   | Multiplies by 2 per shift | `5 << 1 = 10`              |              
| Right Shift | `>>`   | Divides by 2 per shift    | `5 >> 1 = 2`               |              

#### 🔹 **Setting a Bit**

Turn **a bit to 1** at a specific position.

```cpp
number = number | (1 << position);
```

#### 🔹 **Resetting a Bit**

Turn **a bit to 0** at a specific position.

```cpp
number = number & ~(1 << position);
```

---

### 🔁 **Program Flow**

**Part 1: Basic Bitwise Operations**

* Input two numbers
* Apply AND, OR, XOR, NOT, Left Shift, Right Shift
* Show results

**Part 2: Set and Reset a Specific Bit**

* Input a number and bit position
* Show the result after setting and resetting that bit

---

### 🧾 **Sample Output**

```
Enter two numbers: 5 3

AND: 1
OR: 7
XOR: 6
NOT of first number: -6
Left shift of first number by 1: 10
Right shift of first number by 1: 2

Enter a number to modify: 10
Enter a bit position to set: 1
After setting bit at position 1: 10

Enter a bit position to reset: 3
After resetting bit at position 3: 2
```

---

### ✅ **Conclusion**

This experiment helps you understand how bitwise operators:

* Control bits efficiently
* Are used in **hardware, encryption, memory optimization, and flags**
* Allow fast math operations using shifts instead of multiply/divide

