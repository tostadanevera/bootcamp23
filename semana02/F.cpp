#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int P, V; cin >> P >> V;
    int ans = 0;
    REP(i, 0, P) {
        REP(i, 0, V) {
            char v1, v2;
            cin >> v1 >> v2;
            if (v1 == '#' || v2 == '#') ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}