#include <iostream>

using namespace std;

class Node {
public:
    string data;
    Node* next;

    Node(string data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(string name) {
        Node* newNode = new Node(name);
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << name << " enqueued to queue." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        cout << temp->data << " dequeued from queue." << endl;
        delete temp;
        if (front == nullptr) {
            rear = nullptr;
        }
    }

    string peek() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot peek." << endl;
            return "";
        }
        return front->data;
    }
};

int main() {
    Queue q;

    q.enqueue("Alice");
    q.enqueue("Bob");
    q.enqueue("Charlie");

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    q.dequeue();

    cout << "Front element after dequeue: " << q.peek() << endl;

    return 0;
}
