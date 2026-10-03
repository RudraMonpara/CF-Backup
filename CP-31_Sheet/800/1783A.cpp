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
        sort(a.begin(), a.end());
        long long mx=a[n-1];
        long long mn=a[0];

        if(mx == mn){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << mx << " ";
            for(long long i=0;i<n-1;i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}