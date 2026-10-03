#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n,k;
        cin >> n >>k;
        string s;
        cin >> s;
        vector<long long> prefix(n+1,0);
        for(int i=0;i<n;i++){
            prefix[i+1] = prefix[i] + (s[i] == 'W');
        }
        long long min_cell=LLONG_MAX;
        for(int i=0;i<=n-k;i++){
            long long diff =  prefix[i+k] - prefix[i];
            min_cell=min(min_cell, diff);
        }

        cout << min_cell << endl;
    }
    return 0;
}