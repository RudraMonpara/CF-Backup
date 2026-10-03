#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n,x;
        cin >> n >> x;
        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin >> a[i];
        }

        long long min_beauty=0;
        long long max_beauty=0;
        for(long long i=0;i<n;i++){
            max_beauty+=ceil(a[i] * 1.0 /x);
            min_beauty+=a[i];
        }

        min_beauty=ceil(min_beauty * 1.0 / x);
        cout << min_beauty << " " << max_beauty << endl;
    }
    return 0;
}