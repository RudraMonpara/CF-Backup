#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        string s;
        cin >> s;

        long long ans =n;
        long long lft=0,rgt= n-1;

        while(lft <= rgt){
            if(s[lft] != s[rgt]){
                ans -= 2;
            }else{
                break;
            }
            lft++;
            rgt--;
        }
        cout << ans << endl;
    }
    return 0;
}