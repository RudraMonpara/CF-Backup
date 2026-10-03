#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int run=1;
        for(int i=1;i<n;i++){
            if(s[i] != s[i-1]){
                run++;
            }
        }

        if(run==2){
            cout << 2 << endl;
        }else{
            cout << 1 << endl;
        }
        
        
    }
    return 0;
}