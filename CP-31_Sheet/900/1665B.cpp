#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin >> a[i];
        }
        map<long long, long long> mp;
        for(long long i=0;i<n;i++){
            mp[a[i]]++;
        }

        long long cur_high_freq=0;
        for(auto i:mp){
            cur_high_freq=max(cur_high_freq,i.second);
        }

        long long ops=0;
        while(cur_high_freq<n){
            ops++;
            if(cur_high_freq*2<=n){
                ops+=cur_high_freq;
                cur_high_freq*=2;
            }
            else{
                ops += n-cur_high_freq;
                cur_high_freq=n;
            }
        }
        cout << ops << endl;
    }
    return 0;
}