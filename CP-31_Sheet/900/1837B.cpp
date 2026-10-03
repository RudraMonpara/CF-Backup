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

        long long long_sub_len=1;
        long long cur_sub_len=1;

        for(int i=1;i<n;i++){
            if(s[i] == s[i-1]){
                cur_sub_len++;
            }
            else{
                long_sub_len = max(long_sub_len, cur_sub_len);
                cur_sub_len=1;
            }
        }

        long_sub_len = max(long_sub_len, cur_sub_len);
        cout << long_sub_len + 1 << endl;


    }
    return 0;
}