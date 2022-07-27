165853160	Jul/27/2022 11:39UTC+5.5	lokeshkrs2001	266A - Stones on the Table	GNU C++17	Accepted	30 ms	0 KB
#include <iostream>
using namespace std;
string b;
int a, c;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        if (b[i] == b[i + 1]) {
            c++;
        }
    }
    cout << c;
}
