#include <iostream>
using namespace std;

#define MAX 5  

int top = -1, stack[MAX];

void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow!\n";
        return;
    }
    stack[++top] = value;
    cout << value << " pushed into stack.\n";
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow!\n";
        return;
    }
    cout << stack[top--] << " popped from stack.\n";
}

void display() {
    if (top == -1) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Stack elements:\n";
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << "\n";
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}

/* 
1. Push
2. Pop
3. Display
4. Exit
Enter choice: 1
Enter value: 2
2 pushed into stack.

1. Push
2. Pop
3. Display
4. Exit
Enter choice: 1
Enter value: 5
5 pushed into stack.

1. Push
2. Pop
3. Display
4. Exit
Enter choice: 1
Enter value: 3
3 pushed into stack.

1. Push
2. Pop
3. Display
4. Exit
Enter choice: 3
Stack elements:
2
5
3

1. Push
2. Pop
3. Display
4. Exit
Enter choice: 2
3 popped from stack.

1. Push
2. Pop
3. Display
4. Exit
Enter choice: 2
5 popped from stack.

1. Push
2. Pop
3. Display
4. Exit
Enter choice: 2
2 popped from stack.

1. Push
2. Pop
3. Display
4. Exit
Enter choice: 2
Stack Underflow!


