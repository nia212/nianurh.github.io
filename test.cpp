#include <iostream>
#define N 100
using namespace std;

struct Stack{
    int count = -1;
    int* data = new int[N];
    
    bool isEmpty(){
        return (count == -1);
    }
    
    bool isFull(){
        return (count == N);
    }
    
    void push(int elmData){
        if(isFull()){
            cout <<"Penuh woi!\n";
        }else{
            count++;
            data[count] = elmData;
        }
    }
    
    int pop(){
        if (isEmpty()){
            cout<<"Kosong shayy\n";
            exit(EXIT_FAILURE);
        }else{
            int temp = data[count];
            count--;
            return temp;
        }
    }
    
    int top(){
        if (isEmpty()){
            cout <<"Kosong cuy\n";
            exit(EXIT_FAILURE);
        }else{
            return data [count];
        }
    }
};


int main() {
    Stack tumpukanPahala;
   /* tumpukanPahala.push(200);
    tumpukanPahala.push(100);
    tumpukanPahala.push(-3);
    tumpukanPahala.push(-20);
    cout<<tumpukanPahala.top()<<"\n";
    cout<<tumpukanPahala.pop()<<"\n";
    cout<<tumpukanPahala.pop()<<"\n";
    cout<<tumpukanPahala.pop()<<"\n";
    cout<<tumpukanPahala.pop()<<"\n";*/
    cout<<tumpukanPahala.top()<<"\n";

    return 0;
}