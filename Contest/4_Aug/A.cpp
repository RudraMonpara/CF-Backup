#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        int rounds = 0;
        while (true)
        {
            if (a == b || b == c || a == c)
                break;

            if (a > b && a > c)
            {
                if (b < c)
                {
                    a--;
                    b++;
                }
                else
                {
                    a--;
                    c++;
                }
            }
            else if (b > a && b > c)
            {
                if (a < c)
                {
                    b--;
                    a++;
                }
                else
                {
                    b--;
                    c++;
                }
            }
            else
            {

                if (a < b)
                {
                    c--;
                    a++;
                }
                else
                {
                    c--;
                    b++;
                }
            }

            rounds++;
        }

        cout << rounds << endl;
    }
    return 0;
}