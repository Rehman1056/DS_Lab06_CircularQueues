/*#include<iostream>
using namespace std;

template<class T> // stack teemplate
class sstack{
private:
    int top;
    int size;
    T* arr;
public:
    sstack(int s){
        size=s;
        top=-1;
        arr =new T[size];
    
    }
    bool isfull(){
        return (top ==size - 1);
    }
    bool isempty(){
        return (top == -1);
    }
    void push(T val){
        if(isfull()){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }
    T pop(){
        if(isempty()){
            cout<<"stack Underflow"<<endl;
        }
    }
    ~sstack(){
        delete arr;
    }
};

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
            return '\0';
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
        delete arr;
    }
};

template <class T>// template for the circular queue
class c_queue{
private:
    int size;
    int front;
    int rear;
    T* arr;
public:
    c_queue(int s){
        size =s;
        front=-1;
        rear =-1;
        arr =new T[size];
    }
    bool isfull(){
        return ((rear +1)%size ==front);
    }
    bool isempty(){
        return (front ==-1);
    }
    void enqeue(T val){
        if(isfull()){
            cout<<"circular queue overflow"<<endl;
            return;
        }
        if(isempty()){
            front=rear=0;
        }
        else{
            rear =(rear + 1)% size;
        }
        arr[rear]=val;
    }
    T dequeue(){
        if(isempty()){
            cout<<"circular queue undrflow"<<endl;
            return '\0';
        }
        T val =arr[front];
        if (front ==rear){
            front =rear = -1;
        }
        else{
            front =(front +1)%size;
        }
        return val;
    }
    T getfront(){
        return arr[front];
    }
    ~c_queue(){
        delete arr;
    }
};

int main(){
    sstack<char> s(20);
    lqueue<char> q(20);
    
    char w[50];
    
    cout<<"Enter a word: ";
    cin>>w;
    
    int i=0;
    while (w[i]!='\0'){
        s.push(w[i]);
        q.enqueue(w[i]);
        i++;
    }
    bool ispalindrome =true;
    
    cout<<"stack pops: ";
    for(int j=0;j<i;j++){
        char st =s.pop();
        cout<<st<<" ";
    }
    cout<<endl;
    cout<<"queue deq: ";
    for(int j=0;j<i;j++){
        char qu= q.dequeue();
        cout<<qu<<" ";
    }
    cout<<endl;
    for (int j =0;j<i;j++){
        s.push(w[j]);
        q.enqueue(w[j]);
    }
    
    for(int j=0;j<i;j++){
        char st =s.pop();
        char qu =q.dequeue();
        if(st!=qu){
            ispalindrome=false;
        }
    }
    if(ispalindrome){
        cout<<"\nResult: palindrome"<<endl;
    }
    else{
        cout<<"\nResult: Not a plaindrome"<<endl;
        return 0;
    }
}*/
