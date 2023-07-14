#include <iostream>

using namespace std;

int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int cost = 1000;
    int wives = 1;
    while (n - cost >= 0) {
      n -= cost;
      cost += 5000;
      wives++;
    }
    cout << wives << endl;
  }
  return 0;
}
