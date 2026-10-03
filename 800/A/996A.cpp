#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    int d[5] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; i++) {
        ans += n / d[i];
        n %= d[i];
    }
    cout << ans;
}
