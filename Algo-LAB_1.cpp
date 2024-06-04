#include<iostream>
using namespace std;

void printArray(int *A,int n)
{

    for (int i=0; i<n; i++)
    {
    cout<<A[i]<<" ";
    }
    cout<<endl;
}

void shiftList(int *a, int n,int k){
    for(int j=0;j<k;j++){
        for(int i=1;i<n;i++){
            a[i-1]=a[i];
    }
}
    for(int i=n-1;i>=n-k;i--){
        a[i]=0;
    }
}
int main(){
int a[6]={10,20,30,40,50,60};
printArray(a,6);
shiftList(a,6,3);
printArray(a,6);
return 0;
}
