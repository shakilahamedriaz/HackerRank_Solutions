#include<bits/stdc++.h>
using namespace std;


void printNtimes(int i,int n)
{
    if(i>n) return;

    cout<< "Hard indeed."<<endl;

    printNtimes(i+1, n);
}


int main()
{
    int n;
    cin>>n;
     
     printNtimes(1,n);

    return 0;
}