#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int N, C; cin >> N >> C;
        bool found = false;
        for(int i = 0; i < N; ++i) {
            int B; cin >> B;
            if (B == C && !found ) { found = true; }
        }
        cout << (found ? "YES" : "NO") << '\n';
    }
    return 0;
}