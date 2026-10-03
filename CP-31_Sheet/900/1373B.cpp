#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int count_zeros=0;
        int count_ones=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                count_zeros++;
            }else{
                count_ones++;
            }
        }

        int ops=min(count_zeros,count_ones);
        if(ops % 2 != 0){
            cout << "DA" << endl;
        }else{
            cout << "NET" << endl;
        }
    }
    return 0;
}