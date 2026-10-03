#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long xo,n;
        cin >> xo >> n;
        
        long long final_Pos;

        if(n%4==1){
            final_Pos = -n;
        }else if(n%4==2){
            final_Pos = 1;
        }else if(n%4==3){
            final_Pos = n+1;
        }else{
            final_Pos = 0;
        }

        if(xo%2==0){
            final_Pos = xo + final_Pos;
        }else{
            final_Pos = xo - final_Pos;
        }
        cout << final_Pos << endl;
        
    return 0;
}