#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)

int main() {
    int A, B; cin >> A >> B;
    int arrA[A], arrB[B];
    REP(i, 0, A) cin >> arrA[i];
	REP(i, 0, B) cin >> arrB[i];

    int pA = 0, pB = 0;
    while (pA < A && pB < B) {
        if (arrA[pA] == arrB[pB]) {
            int prev = arrA[pA];
            cout << arrA[pA] << ' ';
            while (arrA[pA] == prev) { pA++; }
            while (arrB[pB] == prev) { pB++; }
        } 
        else if (arrA[pA] < arrB[pB]) { pA++; } 
        else { pB++; }
    }
    return 0;
}