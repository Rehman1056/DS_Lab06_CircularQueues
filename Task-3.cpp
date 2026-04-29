/*#include<iostream>
#include<string>
using namespace std;

template <class T>
class lqueue{
private:
    int size;
    int front;
    int rear;
    T* arr;
public:
    lqueue(int s){
        size = s;
        front = -1;
        rear = -1;
        arr = new T[size];
    }

    bool isfull(){
        return (rear == size - 1);
    }

    bool isempty(){
        return (front == -1);
    }

    void enqueue(T val){
        if (isfull()) {
            cout << "Queue is full. Cannot add." << endl;
            return;
        }

        if (front == -1){
            front = 0;
        }

        rear++;
        arr[rear] = val;
    }

    T dequeue(){
        if (isempty()){
            cout << "No documents in queue." << endl;
            return T{};
        }

        T val = arr[front];

        if(front == rear){
            front = rear = -1;
        }
        else{
            front++;
        }

        return val;
    }

    T getfront(){
        return arr[front];
    }

    T getrear(){
        return arr[rear];
    }

    ~lqueue(){
        delete[] arr;
    }
};


int main(){

    lqueue<string> printerQueue(10);
    string command;
    string document;

    while(true){

        cout << "\nEnter command (ADD / PRINT / EXIT): ";
        cin >> command;

        if(command == "ADD"){
            cout << "Enter document name: ";
            cin >> document;

            printerQueue.enqueue(document);
        }

        else if(command == "PRINT"){

            if(printerQueue.isempty()){
                cout << "No documents in queue." << endl;
            }
            else{
                string doc = printerQueue.dequeue();
                cout << "Printing: " << doc << endl;
            }
        }

        else if(command == "EXIT"){
            cout << "Exiting program..." << endl;
            break;
        }

        else{
            cout << "Invalid command. Try again." << endl;
        }
    }

    return 0;
}*/
