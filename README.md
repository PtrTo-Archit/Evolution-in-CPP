# Evolution-in-CPP
"A comprehensive collection of Data Structures and Algorithms implemented in C++. Featuring optimized solutions to LeetCode problems, organized by topic with complexity analysis."
# DSA-Vault

My personal collection of Data Structures and Algorithms problems solved in C++. This repo serves as a central hub for my logic building and interview preparation.

## 📂 Folder Structure
- **Arrays/**: Linear data structure problems.
- **Strings/**: Pattern matching and manipulation.
- **Searching-Sorting/**: Binary search, Merge sort, etc.
- **LinkedLists/**: Singly, Doubly, and Circular.
- **Trees-Graphs/**: Hierarchical and networked data.
- **Dynamic-Programming/**: Optimization problems.

## 🚀 How to use
Each file is a standalone C++ solution. I include the problem link and the Time/Space complexity in the comments at the top of each file.
## IMPORTANT NOTES.
1. Use boolalpha to print true or false instead of 1 and 0.
2. v.empty() - <b>Function that returns true if vector has 0 elements and false if it has one or more</b>
3. In character arrays we do not need to use loop for input and output of array.
4. Always use const keyword if we only want to read data of a vector or array so that it shows warning if changes made.
5. we should first try to check false condition in any bool return rather than true and true at last return of function(valid palindrome).
6. when we use <b> static const </b> then the variable is owned by a class not by particular object .
Imagine you are designing a game with 10,000 "Enemy" characters. Each enemy has a const int MAX_HEALTH = 100;.
<b>If you use const</b>: You waste memory storing the number "100" ten thousand times.
<b>If you use static const</b>: You save a significant amount of memory, which is critical in high-performance environments like Game Engines or HFT (High-Frequency Trading).
7. Equal- <b> It is a function used to check whether two arrays are equal. Used in order to avoid loops for checking </b>.