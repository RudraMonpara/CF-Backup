#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        string s,t;
        cin >> s >> t;

        int n=s.size();
        int m=t.size();
        vector<int> frequency_in_t(26,0);
        for(int i=0;i<m;i++){
            frequency_in_t[t[i]-'A']++;
        }

        for(int i=n-1;i>=0;i--){
            if(frequency_in_t[s[i]-'A']>0){
                frequency_in_t[s[i]-'A']--;
            }
            else{
                s[i]='?';
            }
        }

        string result="";
        for(int i=0;i<n;i++){
            if(s[i] != '?'){
                result += s[i];
            }
        }

        if(result == t){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}