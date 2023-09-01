#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        int mi=0, bi=0;
        swap(arr[0],arr[n]);

        for(int i=0; i<n; i++){

            if(arr[i]%==0){

                mi+=arr[i];
            }
            else{

                bi+=arr[i];
            }
        }

        if(mi>){

            cout<< "YES"<<endl;
        }
        else{

            cout<< "NO"<<endl;
        }
    }
    return 0;
}

