#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Stack{

private:
int n=5;
int top=-1;
T *s;


public:
Stack(){
    n=3;
    top=-1;
    s= new T [n];


}

Stack(int n){
    this->n=n;
    top=-1;
    s= new T [n];


}


bool isFull(){
return top==n-1?true:false;
}

bool isEmpty(){
return top==-1?true:false;
}

int findTop(){
return top;}

void push(T x){
    if(isFull()){cout<<"STACK IS FULL"<<endl;
        return; }
    else {top++;
    s[top]=x;}
}

void pop(){
    if(isEmpty()){cout<<"STACK IS EMPTY"<<endl;}
    top--;


}
void print(){
for(int i=top; i>=0; i--) cout<<s[i]<<endl;

}

};
int main ()
{
/*Stack *a= new Stack(10);
a->push(10);
a->push(20);
a->push(30);
a->push(40);
a->print();*/


/*Stack b(3);
b.push(10);
b.push(20);
b.push(30);
b.push(40);
b.print();*/


Stack<int> *a= new Stack<int>(10);
a->push(10);
a->push(20);
a->push(30);
a->push(40);
a->print();


Stack<string> *a1= new Stack<string>(10);
a1->push("gfgvr");
a1->push("rjgfudh");
a1->push("vjhfd");
a1->push("dfjd");
a1->print();

}

