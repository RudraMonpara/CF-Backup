#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    int count=0;
    while(test){
        int p, v, t;
        cin>>p>>v>>t;
        if(p+v== 2 || v+t == 2 || p+t == 2) count+=1;
        test--;
    }
    cout<<count;
    return 0;
    
}