#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    sort(arr, arr+n);

    int ans= n/2;

    cout<<arr[ans]<<endl;


    return 0 ;
}
