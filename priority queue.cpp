#include <iostream>
using namespace std;

#define SIZE 5

int values[SIZE];
int priorities[SIZE];
int count = 0;

void enqueue(int value, int priority) {
    if (count == SIZE) {
        cout << "Queue is full\n";
        return;
    }

    int i;
    for (i = count - 1; i >= 0; i--) {
        if (priorities[i] > priority) {
            values[i + 1] = values[i];       // Shift value
            priorities[i + 1] = priorities[i]; // Shift priority
        } else {
            break;
        }
    }

    values[i + 1] = value;
    priorities[i + 1] = priority;
    count++;
    cout << value << " added with priority " << priority << ".\n";
}

void dequeue() {
    if (count == 0) {
        cout << "Queue is empty\n";
        return;
    }
    cout << values[0] << " removed from queue.\n";

    for (int i = 0; i < count - 1; i++) {
        values[i] = values[i + 1];       // Shift value left
        priorities[i] = priorities[i + 1]; // Shift priority left
    }

    count--;
}

void display() {
    if (count == 0) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Priority Queue: ";
    for (int i = 0; i < count; i++) {
        cout << "(" << values[i] << ", P" << priorities[i] << ") ";
    }
    cout << endl;
}

int main() {
    int choice, value, priority;
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value and priority: ";
                cin >> value >> priority;
                enqueue(value, priority);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}

