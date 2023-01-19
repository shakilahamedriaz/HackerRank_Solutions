#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int arr[n];

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    long minsum=0,maxsum=0;

    for(int i=0; i<4; i++){

        minsum+=arr[i];
        maxsum+=arr[n-1-i];
    }


    cout<<minsum<< " " <<maxsum<<endl;
}


