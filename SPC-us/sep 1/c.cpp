#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v={a,b,c};
    sort(v.begin(),v.end());

    cout<<v[1]<<endl;

    return 0;
}

