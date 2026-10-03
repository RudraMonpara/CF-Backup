#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        string s;

        cin >> n >> s;
        
        int ans=0;
        for(int i=0;i<n;i++){
            ans++;
            if(s[i] == 'L') break;
        }

        cout << ans << endl;

    }
    return 0;
}