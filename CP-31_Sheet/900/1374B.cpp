#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        long long count_2s=0;
        long long count_3s=0;
        while (n>0 && n%2==0 )
        {
            count_2s++;
            n/=2;
        }
        while (n>0 && n%3==0 )
        {
            count_3s++;
            n/=3;
        }
        if(n>1 || count_2s > count_3s){
            cout << -1 << endl;
        }else{
            cout << count_3s + (count_3s-count_2s) << endl;
        }
    }
    return 0;
}