#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin >> a[i];
        }

        long long tc=0;
        long long cc=0;

        for(long long i=0;i<n;i++){
            if(a[i] == 2){
                tc++;
            }
        }

        long long ans =-1;

        for(long long i=0;i<n;i++){
            if(a[i] == 2){
                cc++;
            }
            if( cc == tc - cc ){
                ans = i + 1;
                break;
            }
        }

        cout << ans << endl;


    }
    return 0;
}