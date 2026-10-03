#include <bits/stdc++.h>
using namespace std;

int main(){
    string l1,l2,l3;
    cin>>l1>>l2>>l3;
    string temp = l1+l2;
    sort(temp.begin(),temp.end());
    sort(l3.begin(),l3.end());
    if(temp == l3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}