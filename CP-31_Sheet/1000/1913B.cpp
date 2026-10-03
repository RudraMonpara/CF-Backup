#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        long long no_of_0s=0;
        long long no_of_1s=0;
        int n=s.size();

        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                no_of_0s++;
            }else{
                no_of_1s++;
            }
        }

        int length_of_t=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0' && no_of_1s>0){
                no_of_1s--, length_of_t++;
            }else if(s[i]=='1' && no_of_0s>0){
                no_of_0s--, length_of_t++;
            }else{
                break;
            }
        }

        cout << n - length_of_t<< endl;

    }
    return 0;
}