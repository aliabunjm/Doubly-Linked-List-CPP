# Doubly Linked List in C++

A generic **Doubly Linked List** implementation in C++ using **Object-Oriented Programming (OOP)** and **Templates**.

This project demonstrates how a doubly linked list works and provides a reusable class that supports different data types.

## Features

- Insert elements at the beginning or end
- Insert an element after a specific node or index
- Delete the first, last, or a specific node
- Search for elements
- Access elements by index
- Update elements by index
- Get the list size
- Check whether the list is empty
- Reverse the list
- Clear all elements
- Print the list

## Technologies Used

- C++
- Object-Oriented Programming (OOP)
- Class Templates
- Pointers
- Dynamic Memory Allocation
- Data Structures

## Project Structure

```text
Doubly-Linked-List-CPP/
│
├── clsDblLinkedList.cpp
├── Main.cpp
└── README.md
```

## Example Usage

```cpp
#include <iostream>
#include "clsDblLinkedList.cpp"
using namespace std;

int main()
{
    clsDblLinkedList<int> MyList;

    MyList.InsertAtBeginning(10);
    MyList.InsertAtEnd(20);
    MyList.InsertAtEnd(30);

    MyList.PrintList();

    cout << "\nSize: " << MyList.Size() << endl;

    return 0;
}
```

## Example Output

```text
10    20    30

Size: 3
```

## Learning Objectives

This project was created to practice and strengthen my understanding of:

- Doubly Linked List data structures
- Pointers and memory management
- C++ Templates and OOP
- Insertion and deletion operations
- Working with nodes and linked structures

## Author

**Ali Abunjm**

GitHub: [@aliabunjm](https://github.com/aliabunjm)

---

*This project is part of my journey in learning Data Structures and improving my C++ programming skills.*
