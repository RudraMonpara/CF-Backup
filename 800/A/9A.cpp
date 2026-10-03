#include <bits/stdc++.h>
using namespace std;

int main(){
    int y, w;
    cin >> y >> w;
    int mx = max(y,w);
    int p = 6 - mx + 1;
    int g = __gcd(p, 6);
    cout << p/g << "/" << 6/g << endl;
    return 0;
}