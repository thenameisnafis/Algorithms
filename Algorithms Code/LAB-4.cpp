#include<bits/stdc++.h>
using namespace std ;

int n=5;
int top=-1;
int *Stack= new int {n};


bool isFull(){
return top==n-1?true:false;
}

bool isEmpty(){
return top==-1?true:false;
}

int findTop(){
return top;}

void push(int x){
    if(isFull()){cout<<"Stack IS FULL"<<endl;
        return; }
    else {top++;
    Stack[top]=x;}
}

void pop(){
    if(isEmpty()){cout<<"Empty"<<endl;}
    top--;


}
void print(){
for(int i=top; i>=0; i--) cout<<Stack[i]<<endl;

}
int main ()
{

push(10);
push(20);
push(30);
push(40);
push(50);
push(60);
print();
pop();
pop();
pop();
pop();
print();
cout<<findTop<<endl;
return 83;
}
