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
        ll gcd1=0, gcd2=0;
        for(int i=0;i<n;i++){
            if(i&1){
                gcd2= __gcd(gcd2,a[i]);
            }else{
                gcd1= __gcd(gcd1,a[i]);
            }
        }

        bool flg=true;
        for(int i=1;i<n;i+=2){
            if(a[i]%gcd1==0){
                flg=false;
                break;
            }
        }
        if(flg){
            cout << gcd1<< endl;
            continue;
        }
        
        flg=true;
        for(int i=0;i<n;i+=2){
            if(a[i]%gcd2==0){
                flg=false;
                break;
            }
        }
        
        if(flg){
            cout << gcd2<< endl;
        }else{
            cout << 0 << endl;
        }
        
    }
    return 0;
}