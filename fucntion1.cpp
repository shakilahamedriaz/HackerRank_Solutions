#include <bits/stdc++.h>
using namespace std;

int shakil(int a, int b, int c, int d)
{
   ;

    return max(max(a,b), max(c,d));
}

int main()
{
  
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << shakil(a, b, c, d) << endl;
    
    return 0;
}
