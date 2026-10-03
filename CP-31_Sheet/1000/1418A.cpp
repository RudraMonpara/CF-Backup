#include <bits/stdc++.h>
using namespace std;

long long ceil_division(long long a, long long b) { return (a + b + -1) / b; }

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;
        long long gained_stics_per_trade = (x - 1);
        long long needed_stics = (k * y + k - 1);
        long long trade = 0;
        trade += ceil_division(needed_stics, gained_stics_per_trade);
        trade += k;

        cout << trade << endl;
    }
    return 0;
}