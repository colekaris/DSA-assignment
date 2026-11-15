
#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
    int items[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if ((rear + 1) % SIZE == front) {
            cout << "Queue is full\n";
            return;
        }

        if (front == -1) {
            front = 0;
        }

        rear = (rear + 1) % SIZE;
        items[rear] = value;

        cout << value << " inserted\n";
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }

        cout << items[front] << " removed\n";

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }

        int i = front;

        while (true) {
            cout << items[i] << " ";
            if (i == rear)
                break;

            i = (i + 1) % SIZE;
        }

        cout << endl;
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    return 0;
}
