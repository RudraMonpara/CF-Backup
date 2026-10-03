#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        vector<ll> pre(n);
        pre[0]=a[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+a[i];
        }
        ll ans=0;
        for(int first=0;first<=k;first++){
            int second=k-first;
            int left=2*first;
            int right=n-second-1;
            ll sun=pre[right]-(left==0 ? 0 : pre[left-1]);
            ans=max(ans,sun);
        }
        cout << ans << endl;

    }
    return 0;
}