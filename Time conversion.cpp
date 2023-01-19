#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;

string print(int hr){
    if(hr<10) return "0"+to_string(hr);
    else return to_string(hr);
}



int main()
{
   int hr,mn,sec;
   string str;

   char r;

   cin>>hr>>r>>mn>>r>>sec>>str;

   if(str== "PM" && hr != 12) hr =hr+12;

   else if(str == "AM" && hr==12) hr= (hr+12)%24;

   cout<<print(hr)<< ":"<<print(mn)<< ":"<<print(sec)<<endl;

    return 0;
}
