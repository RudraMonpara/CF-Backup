#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(auto &it:a) cin >> it;

        vector<ll> pre(n);
        pre[0]=a[0];
        for(ll i=1;i<n;i++){
            pre[i]=a[i]+pre[i-1];
        }
        ll ans=0;
        for(ll k=1;k<=n;k++){
            if(n%k)continue;
            ll st=k-1;
            ll res=0;
            ll maxi=pre[st];
            ll mini=pre[st];
            for(ll idx=st+k;idx<n;idx+=k){
                ll curr=pre[idx]-pre[idx-k];
                maxi=max(maxi,curr);
                mini=min(mini,curr);
            }
            ans=max(ans,maxi-mini);
        }
        cout << ans << endl;
    }
    return 0;
}