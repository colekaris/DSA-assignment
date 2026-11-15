#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int items[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue is full\n";
        } else {
            if (front == -1) {
                front = 0;
            }

            rear++;
            items[rear] = value;

            cout << value << " inserted\n";
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
        } else {
            cout << items[front] << " removed\n";
            front++;
        }
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
        } else {
            for (int i = front; i <= rear; i++) {
                cout << items[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    return 0;
}
