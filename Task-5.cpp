#include <iostream>
#include <string>
using namespace std;

template <class T>
class CQueue {
private:
    int size;
    int front;
    int rear;
    T* arr;

public:
    CQueue(int s) {
        size = s;
        front = -1;
        rear = -1;
        arr = new T[size];
    }

    bool isFull() {
        return ((rear + 1) % size == front);
    }

    bool isEmpty() {
        return (front == -1);
    }

    void Enqueue(T val) {
        if (isFull()) {
            cout << "Queue full, oldest entry will be dropped." << endl;
            dequeue();
        }

        if (isEmpty()) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }

        arr[rear] = val;
    }

    T dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return T{};
        }

        T val = arr[front];

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % size;

        return val;
    }

    void printQueue() {
        if (isEmpty()) {
            cout << "History is empty." << endl;
            return;
        }

        int i = front;
        cout << "[";
        while (true) {
            cout << arr[i];
            if (i == rear) break;
            cout << ", ";
            i = (i + 1) % size;
        }
        cout << "]";
    }

    ~CQueue() {
        delete[] arr;
    }
};


int main() {
    string searches[8] = {"arrays", "queues", "stacks", "trees", "graphs", "sorting", "hashing", "recursion"};
    int k = 3;
    CQueue<string> history(k);

    cout << "Processing predefined searches...\n\n";

    for (int i = 0; i < 8; i++) {
        cout << "Search: " << searches[i] << " -> History: ";
        history.Enqueue(searches[i]);
        history.printQueue();
        cout << endl;
    }

    cout << "\nFinal last " << k << " searches: ";
    history.printQueue();
    cout << "\n\n";

   
    cout << "Enter 5 search terms: \n";
    CQueue<string> userHistory(k);

    for (int i = 0; i < 5; i++) {
        string term;
        cin >> term;
        cout << "Search: " << term << " -> History: ";
        userHistory.Enqueue(term);
        userHistory.printQueue();
        cout << endl;
    }

    cout << "\nFinal last " << k << " searches entered by user: ";
    userHistory.printQueue();
    cout << endl;

    return 0;
}
