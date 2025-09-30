/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;
template <typename T>
class Stack{
T *arr;
int top;
int size;
public:
Stack(int size1):size(size1){
    arr=new T[size];
    top=-1;                     //top should be -1 as at starting the stack is empty
}
void push(T x){               //to insert element in stack
    if(top==size-1){
        cout<<"Stack Overflow"<< endl;
        return;
    }
    arr[++top]=x;
}
void pop(){                     //to remove an element from stack
    if(top==-1){
        cout<<"Stack is empty nothing to pop"<< endl;
        return;
    }
    top--;
}
T peek(){                 //to see element at the top
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    return arr[top];
}
~Stack(){
delete []arr;
}
};
int main(){
    Stack<char>a(10);
    a.push('a');
    a.push('b');
    a.push('c');
    a.push('d');
    a.push('e');
    a.push('f');
    a.push('g');
    a.push('h');
    a.push('i');
    a.push('j');
    for(int i=1;i<=10;i++){
       cout<<a.peek()<<"\t";
        a.pop();
    }
    return 0;
}
/*
Output:-
j       i       h       g       f       e       d       c       b       a
*/
