#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    double num;
    cin >> num;

    string str = to_string(num);

    int cnt = -1;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '.') {
            cnt = i;
            break;
        }
    }

    double takeInt = floor(num);
    cout << takeInt<< "." << str[cnt+1] << "000" << endl;


    return 0;
}
