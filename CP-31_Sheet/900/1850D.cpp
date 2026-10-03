#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n,k;
        cin >> n >> k;
        vector<long long> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        long long counter=1;
        long long ans=1;

        for(int i=1;i<n;i++){
            if(v[i]-v[i-1] <= k){
                counter++;
            }
            else{
                counter=1;
            }
            ans = max(ans, counter);
        }
        cout << n - ans << endl;
    }
    return 0;
}