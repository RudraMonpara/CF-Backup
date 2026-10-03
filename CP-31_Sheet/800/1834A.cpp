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

        long long ngt=0;
        long long pst=0;

        for(long long i=0;i<n;i++){
            if(a[i] == 1){
                pst++;
            }else{
                ngt++;
            }
        }

        long long ops=0;

        while(pst < ngt || ngt % 2 == 1){
            ops++;
            pst++;
            ngt--;
        }

        cout << ops << endl;
    }
    return 0;
}