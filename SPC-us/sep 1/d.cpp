#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin>>str;

    int cnt = 0;

    for (int i = 0; i < str.size(); i++) {
            cnt++;
        if (str[i] == 'SPC') break;

    }


    cout <<cnt-2<<" "<< cnt <<endl;


    return 0;
}
