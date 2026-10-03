#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int rem = 240 - k;
    int time = 0;
    int solved = 0;

    for (int i = 1; i <= n; i++) {
        time += 5 * i;
        if (time > rem) break;
        solved++;
    }

    cout << solved << endl;
    return 0;
}