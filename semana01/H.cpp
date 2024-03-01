#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    double res = 0, nR = 0;
    for (int i = 0; i < n; ++i) {
        double x; cin >> x;
        if ( x >= 5.00 ) {
            res += x; ++nR;
        }
    }
    cout << fixed << setprecision(2) << res/nR << '\n';
    return 0;
}