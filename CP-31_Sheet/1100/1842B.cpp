#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,x;
        cin >> n >> x;

        vector<int> pre[3];

        for(int i=0;i<3;i++){
            int s=0;
            pre[i].push_back(s);
            for(int j=0;j<n;j++){
                int a;
                cin >> a;
                if((s | a) != s){
                    s |= a;
                    pre[i].push_back(s);
                }
            }
        }

        bool ans=false;

        for(int A: pre[0]){
            for(int B: pre[1]){
                for(int C: pre[2]){
                    if((A | B | C) == x){
                        ans=true;
                    }
                }
            }
        }

        cout << (ans ? "Yes" : "No") << endl;
    }

    return 0;
}