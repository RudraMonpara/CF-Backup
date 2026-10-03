#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        if(a[j]<0){
            a[j]*=-1;
        }
    }
    int min=a[0];
    for(int k=1;k<n;k++){
        if(a[k]<min){
            min=a[k];
        }
    }
    cout<<min;
    return 0;
}