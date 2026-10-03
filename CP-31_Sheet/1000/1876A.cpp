#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n,p;
        cin >> n >> p;
        vector<pair<long long,long long>> v(n);
        vector<long long> a(n),b(n);

        for(long long i=0;i<n;i++){
            cin >> a[i];
        }
        for(long long i=0;i<n;i++){
            cin >> b[i];
        }
        for(long long i=0;i<n;i++){
            v[i]={b[i],a[i]};
        }

        sort(v.begin() , v.end());
        long long min_cost=0;
        long long alrd_shared=p;

        for(auto it: v){
            long long can_be_shared= it.second;
            long long sharing_cost= it.first;

            if(sharing_cost >= p){
                break;
            }

            if(alrd_shared + can_be_shared > n){
                min_cost+=(n-alrd_shared)+sharing_cost;
                alrd_shared=n;
                break;
            }else{
                min_cost+=can_be_shared*sharing_cost;
                alrd_shared+=can_be_shared;
            }
        }

        min_cost+=(n-alrd_shared)*p;
        cout << min_cost << endl;
    }
    return 0;
}