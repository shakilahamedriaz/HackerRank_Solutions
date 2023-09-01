#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin >> str;
    int cnt = 0;
    size_t pos = str.find("SPC");

    if (pos != string::npos) {
        cnt = pos;
    } else {
        cnt = str.size();
    }
    cout << cnt+1<< " " << cnt + 3 << endl;

    return 0;
}

/*
Certainly! I'll explain the code you've provided step by step:

cpp
Copy code
#include<bits/stdc++.h>
using namespace std;
This part of the code includes the necessary headers for C++ standard input-output operations and some additional standard libraries like <bits/stdc++.h>. This header includes most standard headers, making it convenient for competitive programming and quick coding.
cpp
Copy code
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
This is the starting point of the C++ program. It defines the main function, which is the entry point of the program.
ios_base::sync_with_stdio(false);: This line turns off synchronization between C and C++ standard streams (cin and cout). This can improve the performance of input and output operations in some cases.
cin.tie(0);: This line unties cin from cout, which means that flushing cout will not flush cin. This can also improve performance in certain scenarios.
cpp
Copy code
    string str;
    cin >> str;
This code declares a string variable str and reads a string input from the user using the cin object.
cpp
Copy code
    int cnt = 0;
    size_t pos = str.find("SPC");
int cnt = 0;: This initializes an integer variable cnt to zero. This variable will be used to store the count of characters.
size_t pos = str.find("SPC");: This line uses the find function to search for the first occurrence of the substring "SPC" in the string str. If "SPC" is found, pos will store its position (an index), otherwise, it will store string::npos (a special constant indicating "not found").
cpp
Copy code
    if (pos != string::npos) {
        cnt = pos;
    } else {
        cnt = str.size();
    }
Here, the code checks whether "SPC" was found using the value stored in pos. If "SPC" was found (pos is not equal to string::npos), it sets cnt to the position of "SPC". If "SPC" was not found, it sets cnt to the length of the string using str.size().
cpp
Copy code
    cout << cnt + 1 << " " << cnt + 3 << endl;
Finally, the code prints the calculated counts. cnt + 1 prints the count of characters before the first occurrence of "SPC" (or the entire string if "SPC" is not found), and cnt + 3 prints the count of characters including "SPC" and the following two characters.
So, the program reads a string, searches for "SPC," and then prints the counts as specified.
*/
