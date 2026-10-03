#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++)
            cin >> a[i];
            
        for(ll i=0;i<n;i++)
            cin >> b[i];
            
            ll maxi=0;
            ll sum=0;
            ll ans=0;
            
            
        for(ll i=0;i<min(n,k);i++){
            sum+=a[i];
            maxi=max(maxi,b[i]);
            ans=max(ans,sum+(k-(i+1))*maxi);
        }

        cout << ans << endl;
    }
    return 0;
}