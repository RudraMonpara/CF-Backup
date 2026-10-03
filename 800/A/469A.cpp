#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+1] = {0};
    int p,q;
    int lvl;
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>lvl;
        a[lvl] = 1;  
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>lvl;
        a[lvl] = 1;
    }
    bool f = true;
    for(int i=1;i<=n;i++){
        if(a[i] == 0){
            f = false;
            break;
        }
    }
    if(f) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    return 0;
}