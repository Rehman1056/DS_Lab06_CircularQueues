/*#include<iostream>
using namespace std;

template <class T> // template for the linear queue
class lqueue{
private:
    int size;
    int front;
    int rear;
    T* arr;
public:
    lqueue(int s){
        size =s;
        front =-1;
        rear =-1;
        arr = new T[size];
    }
    bool isfull(){
        return (rear ==size -1);
    }
    bool isempty(){
        return(front ==-1);
    }
    void enqueue(T val){
        if (isfull()) {
            cout<<"Queue Overflow"<<endl;
            return;
        }
        if (front ==-1){
            front =0;
        }
        rear++;
        arr[rear]=val;
    }
    T dequeue(){
        if (isempty()){
            cout<<"Queue Underflow"<<endl;
            return T{};
        }
        T val =arr[front];
        if(front ==rear){
            front =rear =-1;
        }
        else{front++;}
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
    int arr[5]={10,20,30,40,50};
    int n=5;
    lqueue<int> q(10);
    
    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"\n Enqueuing: ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
        if(i!=n-1){
            cout<<" -> ";
            q.enqueue(arr[i]);
        }
    }
    cout<<"\ndequeuing into array from index";
    for(int i=n-1;i>=0;i--){
        arr[i]=q.dequeue();
    }
    cout<<"\nReversed array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    int userarr[5];
    cout<<"\n Enter 5 numbers: ";
    for(int i=0;i<5;i++){
        cin>>userarr[i];
    }
    lqueue<int> q2(10);
    
    for(int i=0;i<5;i++){
        q2.enqueue(userarr[i]);
    }
    
    for (int i=4;i>=0;i--){
        userarr[i]=q2.dequeue();
    }
    cout<<"\nReversed user array: ";
    for(int i=0;i<5;i++){
        cout<<userarr[i]<<" ";
    }
    return 0;
}*/
