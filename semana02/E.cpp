#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int N; cin >> N;
    int P; cin >> P;
    int M = P, m = P; 
    REP(i, 0, N-1) {
        cin >> P;
        M = max(M, P);
        m = min(m, P);
    }
    cout << m << ' ' << M << endl;
    return 0;
}