#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int N; cin >> N;
    int arrA[N], arrB[N];
    REP(i, 0, N) cin >> arrA[i];
    REP(i, 0, N) {
        cin >> arrB[i];
        cout << (i % 2 == 0 ? arrA[i] : arrB[i]) << ' ';
    }
    cout << '\n';
    REP(i, 0, N) cout << (i % 2 == 0 ? arrB[i] : arrA[i]) << ' ';
    cout << '\n';
    return 0;
}