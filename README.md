# LinkedList Template Implementation

This repository contains an implementation of a templated `LinkedList` class in C++. The project includes the core functionality of a linked list and additional features for enhanced usability.

## Features

The `LinkedList` class supports the following operations:

1. **Insert**: Add a new element to the linked list.
2. **Insert Before**: Insert a new element before a specified node.
3. **Insert After**: Insert a new element after a specified node.
4. **Delete**: Remove an element from the linked list.
5. **`+` Operator**: Combine two linked lists into a single list.
6. **`[]` Operator**: Access an element at a specific index.
7. **`=` Operator**: Assign one linked list to another.
8. **Display**: Print all elements of the linked list.
9. **Get Count**: Return the number of elements in the linked list.
10. **Copy Constructor**: Create a new linked list as a copy of an existing one.

---

## File Structure

- **`linkedList.h`**: Header file containing the declaration of the `LinkedList` class and its member functions.
- **`linkedList.cpp`**: Source file implementing the `LinkedList` class.
- **`Node.h`**: Header file containing the definition of the `Node` class used by the linked list.
- **`Node.cpp`**: Source file implementing the `Node` class.
- **`main.cpp`**: Contains the `main` function for demonstrating and testing the functionality of the `LinkedList` class.

---

## How to Compile and Run

1. Clone the repository:
   ```bash
   git clone https://github.com/MohamedHaro0on/template_class_linked_list.git
   cd template_class_linked_list
   ```

2. Compile the project using a C++ compiler (e.g., `g++`):
   ```bash
    g++ -o ./linkedlist Node.h Node.cpp LinkedList.h LinkedList.cpp main.cpp 
   ```

3. Run the executable:
   ```bash
   ./linkedlist
   ```

---

## Example Usage

Below is an example of how to use the `LinkedList` class in `main.cpp`:

```cpp
#include "linkedList.h"
#include <iostream>

int main() {
    LinkedList<int> list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    std::cout << "List contents:" << std::endl;
    list.display();

    std::cout << "Count: " << list.getCount() << std::endl;

    list.insertBefore(20, 15);
    list.insertAfter(20, 25);

    std::cout << "Updated list contents:" << std::endl;
    list.display();

    return 0;
}
```

---

## Future Enhancements

- Add support for reverse iteration.
- Implement sorting algorithms for the linked list.
- Add unit tests using a testing framework like Google Test.

