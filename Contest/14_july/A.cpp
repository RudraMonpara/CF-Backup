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

        int maxLen=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i] == '#'){
                count++;
                maxLen=max(maxLen, count);
            }else{
                count=0;
                maxLen=max(maxLen, count);
            }
        }

        int time = (maxLen+1)/2;

        cout << time << endl;
    }
    return 0;
}