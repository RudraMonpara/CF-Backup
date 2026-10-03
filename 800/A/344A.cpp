#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int group=0;
    int prev;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        if(i==0){
            prev=m;
            group++;
        }
        else{
            if(m!=prev){
                group++;
                prev=m;
            }
        }
    }
    cout << group;
}