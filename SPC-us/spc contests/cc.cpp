#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;
while (t--) {
int n;
string s;
cin >> n >> s;
bool can_alternate = true;
char curr_char = s[0];
for (int i = 1; i < n; i++) {
if (s[i] == curr_char) {
can_alternate = false;
break;
}
curr_char = s[i];
}
if (can_alternate) {
cout << "YES\n";
} else {
cout << "NO\n";
}
}
return 0;
}
