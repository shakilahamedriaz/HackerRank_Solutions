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

    int len=sizeof(arr)/sizeof(int);
    sort(arr, arr+n);

    int cnt=0;
    for(int i=0; i<len; i++){

        if(arr[i]==arr[i+1]){

            cnt=1;
        }
    }

    if(cnt==0){

        cout<<arr[1]<<endl;
    }
    else{

        cout<< "-1"<<endl;
    }


    return 0;
}
