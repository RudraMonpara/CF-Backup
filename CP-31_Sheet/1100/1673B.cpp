#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int n=(int)s.size();
        set<char> c;
        int k;
        bool flag=true;
        for(k=0;k<n;k++){
            if(c.find(s[k]) == c.end()){
                c.insert(s[k]);
            }else{
                break;
            }
        }
        for(int i=k;i<n;i++){
            if(s[i] != s[i-k]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;   
        }

    }
    return 0;
}