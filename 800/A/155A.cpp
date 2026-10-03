#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int s;
    cin >> s;

    int best = s, worst = s;
    int count = 0;

    for (int i = 1; i < n; i++) {
        cin >> s;

        if (s > best) {
            best = s;
            count++;
        } 
        else if (s < worst) {
            worst = s;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
