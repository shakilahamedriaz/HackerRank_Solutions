#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {

        string s;
        cin>>s;

        bool isA=false, isB=false, isC=false;

        for(int i=0; i<s.size(); i++){

            if(s[i]=='A'){

                isA=true;
            }
            if(s[i]=='B'){

                isB=true;
            }
            if(s[i]=='C'){

                isC=true;
            }
        }

        if(isA && isB && isC){

            cout<< "1"<<endl;

        }
        else{

            cout<< "0"<<endl;
        }
    }
}
