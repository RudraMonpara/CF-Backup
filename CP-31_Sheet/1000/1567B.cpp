#include <bits/stdc++.h>
using namespace std;

long long xor_till(long long n)
{
    if (n < 0)
        return 0;
    long long r = n % 4;
    if (r == 0)
        return n;
    if (r == 1)
        return 1;
    if (r == 2)
        return n + 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        long long arr_xor = xor_till(a - 1);

        if (arr_xor == b)
        {
            cout << a << endl;
        }
        else if ((arr_xor ^ b) != a)
        {
            cout << a + 1 << endl;
        }
        else
        {
            cout << a + 2 << endl;
        }
    }
    return 0;
}