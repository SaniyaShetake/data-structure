#include <iostream>
using namespace std;

#define MAX 5 

int front = -1, rear = -1, queue[MAX];

void enqueue(int value) 
{
    if (rear == MAX - 1) 
	{
        cout << "Queue Overflow!\n";
        return;
    }
    if (front == -1) front = 0;  
    queue[++rear] = value;
    cout << value << " added to queue.\n";
}

void dequeue()
 {
    if (front == -1 || front > rear) 
	{
        cout << "Queue Underflow!\n";
        return;
    }
    cout << queue[front++] << " removed from queue.\n";
    if (front > rear) front = rear = -1;  
}

void display()
 {
    if (front == -1) 
	{
        cout << "Queue is empty.\n";
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) 
	{
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
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


1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 1
Enter value: 6
6 added to queue.

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 1
Enter value: 2
2 added to queue.

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 1
Enter value: 2
2 added to queue.

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 1
Enter value: 4
4 added to queue.

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 1
Enter value: 7
7 added to queue.

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 1
Enter value: 8
Queue Overflow!

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 2
6 removed from queue.

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 2
2 removed from queue.

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 2
2 removed from queue.

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 2
4 removed from queue.

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 2
7 removed from queue.

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 2
Queue Underflow!

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 3
Queue is empty.


*/

