#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    float zcnt=0.0, pcnt=0.0, ncnt=0.0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0){

            pcnt++;
        }
        else if(arr[i]<0){

            ncnt++;
        }
        else{

            zcnt++;
        }
    }


    cout<<pcnt<<endl;
    cout<<ncnt<<endl;
    cout<<zcnt<<endl;

    cout<<fixed<<setprecision(6)<<pcnt/n<<endl;
    cout<<fixed<<setprecision(6)<<ncnt/n<<endl;
    cout<<fixed<<setprecision(6)<<zcnt/n<<endl;


}
