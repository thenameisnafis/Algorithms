#include<bits/stdc++.h>
using namespace std;
class Stack{

private:
int n=5;
int top=-1;
string *s;


public:
Stack(){
    n=3;
    top=-1;
    s= new string [n];


}

Stack(int n){
    this->n=n;
    top=-1;
    s= new string [n];


}


bool isFull(){
return top==n-1?true:false;
}

bool isEmpty(){
return top==-1?true:false;
}

int findTop(){
return top;}

void push(string x){
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


Stack *a= new Stack(10);
a->push("ABC");
a->push("DCR");
a->push("RTY");
a->push("yit");
a->print();

}
