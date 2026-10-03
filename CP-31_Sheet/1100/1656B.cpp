#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n , k;
        cin >> n >> k;
        vector<ll> a(n);
        for(auto &it: a) cin >> it;
        map<ll,bool> mp;
        for(auto it : a){
            mp[it]=true;
        }
        bool flg = false;
        for(int i=0;i<n;i++){
            if(mp.find(a[i]-k) != mp.end()){
                flg = true;
            }
        }
        if(flg){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}