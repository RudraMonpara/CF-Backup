#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        vector<long long> sec_ele;
        long long lowest_first_min= INT_MAX;
        for(int i=0;i<n;i++){
            long long m;
            cin >> m;
            vector<long long> a(m);
            for(auto &x : a){
                cin >> x;
            }

            sort(a.begin(), a.end());

            sec_ele.push_back(a[1]);
            lowest_first_min = min(lowest_first_min, a[0]);
        }
        sort(sec_ele.begin(), sec_ele.end());

        long long sum_of_sec_ele = accumulate(sec_ele.begin(), sec_ele.end(), 0LL);
        long long lowest_sec_min= sec_ele[0];

        long long ans= lowest_first_min + sum_of_sec_ele - lowest_sec_min;
        cout << ans << endl;
    }
    return 0;
}