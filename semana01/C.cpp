#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1;
    for (int i = 0; i < n1; ++i) {
        int A; cin >> A;
        cout << A*2 << ' ';
    }cout << '\n';
    cin >> n2;
    for (int i = 0; i < n2; ++i) {
        char B; cin >> B;
        cout << (char) toupper(B) << ' ';
    }
    cout << '\n';
    cin >> n3;
    for (int i = 0; i < n3; ++i) {
        string C; cin >> C;
        for(char c : C) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                cout << 0;
            }
            else { cout << c;}
        }
        cout << ' ';
    }
    cout << '\n';
}