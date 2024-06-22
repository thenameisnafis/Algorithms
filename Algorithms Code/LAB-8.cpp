#include<bits/stdc++.h>
using namespace std;


   void Print(int **p, int row, int col)
{
        for (int i=0; i<row; i++)
    {
        for( int j=0; j<col; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"------------"<<endl;
}





int main()
{

    int row;
    int col;

    cout<<"Enter row:";
    cin>>row;
    cout<<endl;
    cout<<"Enter column:";
    cin>>col;
    cout<<endl;
   int ** m=new int*[row];
    for (int i=0; i<row; i++)
    {
        m[i]= new int [col];
    }

srand(time(0));
        for (int i=0; i<row; i++)
    {
        for( int j=0; j<col; j++)
        {
            m[i][j]=rand();
        }
    }
Print(m, row,col);


    return 83;
}
