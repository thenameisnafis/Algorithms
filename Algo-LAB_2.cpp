#include <bits/stdc++.h>
using namespace std;

int* addBeginning(int *a, int n, int num) {
    int *b = new int[n + 1];
    b[0] = num;
    for (int i = 0; i < n; i++) {
        b[i + 1] = a[i];
    }
    return b;
}

void printList(int *a, int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int Search(int *a, int n, int num){

    for(int i=0;i<n;i++){
        if (a[i]==num){
            return i;
        }
    }
    return -1;
}


int* makeDouble(int *m, int n) {
    int *b = new int[n];
    for (int i = 0; i < n; i++)
        b[i] = m[i] * 2;
    return b;
}

int *deleteItem(int *a, int n, int index) {

    int *b= new int[n-1];
    for(int i=0; i<index;i++) b[i]=a[i];
    for(int i=index; i<n-1; i++) b[i]=a[i+1];
    return b;
}

int *mergeList(int *a, int n1, int *b, int n2) {
    int *c = new int[n1 + n2];
    for (int i = 0; i < n1; i++) c[i] = a[i];
    for (int i = 0; i < n2; i++) c[n1 + i] = b[i];
    return c;
}
int main() {
    int a[5] = {10, 20, 30, 40, 50};
    printList(a, 5);

    //int *p = makeDouble(a, 5);
    //printList(p, 5);

    int *p = addBeginning(a, 5, 100);
    printList(p, 6);
    int index=Search(p,6,30);
    //cout<<index<<endl;
    int *l=deleteItem(p,6,index);
    printList(l, 5);
    int *m=mergeList(p,6,l,5);
    printList(m, 11);

    delete[] l;
    delete[] m;


    return 0;
}
