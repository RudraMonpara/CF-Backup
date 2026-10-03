#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(long long i = 0; i < n; i++){
            cin >> a[i];
        }

        long long count_ones = 0;
        long long count_zeros = 0;
        for(long long i = 0; i < n; i++){
            if(a[i] == 1){
                count_ones++;
            } else if(a[i] == 0){
                count_zeros++;
            }
        }   

        long long ways = pow(2, count_zeros) * count_ones;
        cout << ways << endl;


    }
    return 0;
}