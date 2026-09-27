⭐ Pattern 19 – Symmetric Star Pattern in C++

A C++ program that generates a symmetric star pattern using nested loops. The pattern consists of two mirrored sections: an upper section with decreasing stars and a lower section with increasing stars, separated by a dynamically changing space gap.

📌 Overview

The program takes an integer n and prints a symmetric star pattern.

For n = 4, the pattern is:

********
***  ***
**    **
*      *
*      *
**    **
***  ***
********

The program also supports multiple test cases.

✨ Features
Generates a symmetric star pattern.
Uses nested for loops.
Demonstrates dynamic space management.
Uses separate logic for the upper and lower sections.
Supports multiple test cases.
Demonstrates increasing and decreasing pattern sequences.
Beginner-friendly C++ implementation.
🛠️ Technologies Used
Technology	Purpose
C++	Programming language
iostream	Input and output
Nested Loops	Pattern generation
📝 Problem Statement

Given an integer n, print a symmetric star pattern consisting of:

An upper section where the number of stars decreases in every row.
A middle gap that increases by 2 spaces after every row.
A lower section where the number of stars increases in every row.
A corresponding decrease in the middle space.
Example

For n = 4:

********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
🧠 Approach
1. Upper Section

The first loop starts with n stars on each side and decreases the number of stars after every row.

for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
        cout << "*";
    }
}

The number of spaces between the two star groups starts at 0 and increases by 2 after each row:

iniS += 2;
2. Lower Section

The second section reverses the pattern.

The number of stars starts at 1 and increases with every row:

for (int j = 1; j <= i; j++) {
    cout << "*";
}

At the same time, the number of spaces decreases by 2:

iniS2 -= 2;

This creates the symmetrical structure.

💻 Source Code
#include <iostream>
using namespace std;

void Pattern19(int n) {
    int iniS = 0;

    // Upper Section
    for (int i = 0; i < n; i++) {

        // Stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < iniS; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        iniS += 2;
        cout << endl;
    }

    int iniS2 = 8;

    // Lower Section
    for (int i = 1; i <= n; i++) {

        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < iniS2; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        iniS2 -= 2;
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        Pattern19(n);
    }

    return 0;
}

Note: iniS2 is currently initialized to 8, which matches the spacing for n = 4. If you want the pattern to work correctly for arbitrary values of n, the lower-section spacing should be calculated dynamically from n.

📥 Example Input
1
4
📤 Example Output
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
▶️ How to Run
1. Clone the repository
git clone <repository-url>
cd <repository-folder>
2. Compile the program
g++ main.cpp -o main
3. Run the program
./main

Windows: Use main.exe instead of ./main.

📚 Learning Concepts

This program demonstrates:

Nested for loops
Pattern printing
Symmetric pattern construction
Increasing and decreasing sequences
Dynamic space management
Functions in C++
Multiple test cases
Console input/output
⏱️ Complexity Analysis

For a pattern of size n:

Time Complexity: O(n²)
Auxiliary Space: O(1)

The nested loops process a number of positions proportional to the square of n.

📸 Screenshot

Add your program output screenshot to:

screenshots/output.png

Then include it in the README:

<img width="77" height="171" alt="Screenshot 2026-09-27 at 9 45 56 AM" src="https://github.com/user-attachments/assets/63584f4d-f4bc-4fa3-83bd-49b794527b49" />

Recommended project structure:

Pattern19/
│
├── main.cpp
├── README.md
└── screenshots/
    └── output.png
👤 Author

Rishab Raj Chourasia

C++ | Data Structures & Algorithms | Problem Solving
