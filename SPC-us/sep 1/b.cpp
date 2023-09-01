#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double num;
    cin >> num;


    //cout << fixed << setprecision(1) << num << "000"<<endl;
    string str=to_string(num);
    for(int i=0; i<str.size(); i++)
    {
        int cnt=0;
        if(str[i]!='.')
        {
            cnt++;
        }
    }
    double k=floor(num);
    cout<<k<<"."<<str[cnt]<<"000"<<endl;
    return 0;
}
