#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1000000007;
int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        ll ans= ((n*(n+1)%mod)*(4*n-1)%mod)*337%mod;

        cout << ans << endl;
    }
    return 0;
}