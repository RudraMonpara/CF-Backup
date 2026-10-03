#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        s+=s;
        n*=2;
        long long ind=-1;
        long long ans=INT_MIN;
        for(long long i=n-1;i>=0;i--){
            if(s[i]=='g'){
                ind=i;
            }
            if(s[i]==c){
                ans=max(ans, ind - i);
            }
        }
        cout << ans << endl;

    }
    return 0;
}