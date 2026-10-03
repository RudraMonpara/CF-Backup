#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(auto &it:a) cin >> it;
        ll ans=0;
        for(int i=0;i<n;++i){
            ans=__gcd(ans,abs(a[i]-a[n-i-1]));
        }
        cout << ans << endl;

    }
    return 0;
}