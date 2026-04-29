
/*#include<iostream>
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
            cout << "Queue Overflow" << endl;
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
            cout << "Queue Underflow" << endl;
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

    int arr[5] = {101, 102, 103, 102, 104};

    lqueue<int> mainQ(10);
    lqueue<int> helperQ(10);

    cout << "Array: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    
    for(int i = 0; i < 5; i++){

        int roll = arr[i];
        bool found = false;

        cout << "Checking " << roll << " ... ";

      
        while(!mainQ.isempty()){
            int val = mainQ.dequeue();

            cout << val << " ";

            if(val == roll){
                found = true;
            }

            helperQ.enqueue(val);
        }

        while(!helperQ.isempty()){
            mainQ.enqueue(helperQ.dequeue());
        }

        if(found){
            cout << "<- MATCH!" << endl;
            cout << "DUPLICATE FOUND: " << roll << endl;
        }
        else{
            cout << "(no match). Added." << endl;
            mainQ.enqueue(roll);
        }

        cout << endl;
    }

    cout << "Unique roll numbers: ";

    while(!mainQ.isempty()){
        cout << mainQ.dequeue() << " ";
    }

    cout << endl;

    return 0;
}*/
