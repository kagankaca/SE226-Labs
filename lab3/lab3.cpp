#include <iostream>

class Queue {
private:
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };

    Node* head;
    Node* tail;
    int count;

public:
    Queue() : head(nullptr), tail(nullptr), count(0) {}

    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        count++;
    }

    void dequeue() {
        if (!isEmpty()) {
            Node* temp = head;
            head = head->next;
            delete temp;
            count--;
        } else {
            std::cout << "Queue is empty\n";
        }
    }

    int top() {
        if (!isEmpty()) {
            return head->data;
        } else {
            std::cout << "Queue is empty\n";
            return -1;
        }
    }

    bool isEmpty() {
        return count == 0;
    }

    int size() {
        return count;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    std::cout << "Queue size: " << q.size() << '\n';

    std::cout << "Queue front: " << q.top() << '\n';

    q.dequeue();
    std::cout << "Queue size after dequeue: " << q.size() << '\n';

    std::cout << "Queue front after dequeue: " << q.top() << '\n';

    return 0;
}
