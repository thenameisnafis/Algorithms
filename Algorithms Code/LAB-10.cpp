#include<bits/stdc++.h>
using namespace std;
void print(int *p, int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<p[i]<<endl;
    }
    cout<<endl;
}

void avg(int *p, int n){
    int t=0;
    for (int i=0; i<n; i++)
    {
        t+=p[i];
    }
    cout<<"total:"<<t<<endl;
    int avg=t/40;
    cout<<"Average:"<<avg<<endl;
}
   void bonus(int *p, int n)
   {  cout<<"Bonus"<<endl;
    for (int i=0; i<n; i++)
    {
       cout<<(p[i]+5)<<endl;
    }

}

int main()
{
 int n=40;
 int *a= new int [n];

 ifstream fin("marks.txt");


 for (int i=0;i<n; i++){
    fin>>a[i];
 }
print(a,n);
avg(a,n);
bonus(a,n);












    return 83;
}
