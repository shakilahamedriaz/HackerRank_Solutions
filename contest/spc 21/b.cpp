#include<bits/stdc++.h>
using namespace std;

int ans(int n)
{
    if(n<1000) return 0;

    else if(n<5000)  return 1;

    else if(n<20000)  return 2;

    else if(n<50000)  return 3;

    else return 4;

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout<< ans(n) <<endl;
    }

    return 0;
}