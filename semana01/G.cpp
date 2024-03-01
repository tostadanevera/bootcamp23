#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, D; char O;
    cin >> N >> O >> D;
    switch(O) {
        case '+': cout << N + D; break;
        case '-': cout << N - D; break;
        case '*': cout << N * D; break;
        case '/': 
                if (D == 0) { cout << "ERROR"; break; }
                cout << fixed << setprecision(2) << (double) N / (double) D; break;
    }
    return 0;
}