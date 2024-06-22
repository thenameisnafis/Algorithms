#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int x=5,y=6,z;
int A[x]={10,20,30,40,50};
int B[y]={100,101,102,103,104,105};
z=x+y;
int C[z];
for(int i=0; i<x; i++){
    C[i]=A[i];
}
for(int i=0; i<y; i++){
    C[i+x]=B[i];
}
cout<<"Merge: ";
for(int i=0; i<z; i++){
    cout<<C[i]<<" ";
}




return 83;
}

