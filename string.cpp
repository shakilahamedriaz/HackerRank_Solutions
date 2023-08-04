#include<bits/stdc++.h>
using namespace std;

int main()

{
    string a;
    cin >>a;
    string b;
    cin >>b;
    
    cout<<a.size() << " " <<b.size()<<endl;

    cout<<a+b<<endl;
    cout << b[0] << &a[1] << " " << a[0] << &b[1];

    return 0;
}