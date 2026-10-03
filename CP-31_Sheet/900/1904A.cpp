#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1,1,-1,1};
int dy[4] = {-1,-1,1,1};

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a,b;
        cin >> a >> b;
        
        long long x_k,y_k,x_q,y_q;
        cin >> x_k >> y_k;
        cin >> x_q >> y_q;
        set<pair<long long,long long>> k_h,q_h;

        for(int j=0; j<4;j++){
            k_h.insert({x_k+dx[j]*a,y_k+dy[j]*b});
            k_h.insert({x_k+dx[j]*b,y_k+dy[j]*a});

            q_h.insert({x_q+dx[j]*a,y_q+dy[j]*b});
            q_h.insert({x_q+dx[j]*b,y_q+dy[j]*a});
        }

        int ans = 0;
        for(auto position:k_h){
            if(q_h.find(position) != q_h.end()){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}