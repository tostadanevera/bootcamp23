#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPR(i, a, b) for (int i = a; i >= b; --i)

int main() {
    string s; cin >> s;
    int n = s.size();
    int nums[n];
    REP(i,0,n) { nums[i] = s[i] - '0'; }

    int sum = 0;
    REPR(i,n-1,0) {
        if (i%2 == 0) {
            nums[i] *= 2;
            if (nums[i] > 9) { nums[i] -= 9; }
        }
        sum += nums[i];
    }
    cout << (sum % 10 == 0 ? "YES" : "NO");
    return 0;
}