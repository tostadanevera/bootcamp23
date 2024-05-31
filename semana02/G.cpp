#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int fst, snd; cin >> fst;
    while(cin >> snd) {
        if (snd-fst > 0) cout << 'S';
        else if (snd-fst < 0) cout << 'B';
        else cout << 'I';
        fst = snd;
    }
    cout << '\n';
    return 0;
}