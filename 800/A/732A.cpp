#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,r;
    cin>>k>>r;
    
    for(int n=1; ;n++){
        int lst=(n*k)%10;
        if(lst==0 || lst==r){
            cout<<n<<endl;
            break;
        }
    }
    return 0;
}