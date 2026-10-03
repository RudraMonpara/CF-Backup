#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int uppper=0, lower=0;


    for(int i=0; i<s.length(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            uppper++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            lower++;
        }
    }
    if(uppper>lower){
        for(int i=0; i<s.length(); i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i] -= 32;
            }
        }
    }
    else{
        for(int i=0; i<s.length(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] += 32;
            }
        }
    }
    cout<<s<<endl; 
    return 0; 
}