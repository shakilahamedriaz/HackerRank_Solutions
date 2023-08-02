#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int b;
    vector<string> digits= { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin>>a;
    cin>>b;

    for(int i=a; i<=b; i++)
    {
        if(i>=1 && i<=9)
        {
            cout<< digits[i]<<endl;
        }
        else if(i>9)
        {
            if(i%2==0) cout<< "even" <<endl;
            else cout<< "odd" <<endl;
        }
      
            

    }
    return 0;
}