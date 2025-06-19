#include <iostream>
#define MAX_SIZE 100

using namespace std;

class Queue {
private:
    int front, rear;
    int arr[MAX_SIZE];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    bool isFull() {
        return rear == MAX_SIZE - 1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear++;
        arr[rear] = value;
        cout << value << " enqueued to queue." << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1;
        }
        int dequeuedValue = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        return dequeuedValue;
    }

    void reverse() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot reverse." << endl;
            return;
        }
        int tempQueue[MAX_SIZE];
        int tempFront = front;
        int tempRear = rear;
        while (!isEmpty()) {
            tempQueue[tempRear--] = dequeue();
        }
        for (int i = tempFront; i <= tempRear + 1; i++) {
            enqueue(tempQueue[i]);
        }
        cout << "Queue reversed successfully." << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.reverse();

    cout << "Front element after reverse: " << q.dequeue() << endl;

    return 0;
}
