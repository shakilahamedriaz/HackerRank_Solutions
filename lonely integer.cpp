#include <iostream>
#include <vector>
using namespace std;

int lonelyinteger(vector<int> a);
int lonelyinteger(vector<int> a) {
    int result = 0;
    for (int i = 0; i < a.size(); i++) {
        result ^= a[i];
    }
    return result;
}


int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int uniqueElement = lonelyinteger(arr);
    cout << uniqueElement << endl;

    return 0;
}
