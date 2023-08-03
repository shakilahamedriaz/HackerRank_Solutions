#include <iostream>
using namespace std;

int shakil(int a, int b, int c, int d)
{
    int p = max(a, b);
    int q = max(b, c);

    return max(p, q);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << shakil(a, b, c, d) << endl;
    }
    return 0;
}
