#include <bits/stdc++.h>
using namespace std;    

int main(){
    string s;
    cin>>s;
    string temp;
    
    for(int i=0;i<s.length();i++){
        if(s[i]!='+'){
            temp += s[i];
        }
    }
    sort (temp.begin(), temp.end());
    for (int i = 0; i < temp.length(); ++i) {
        cout << temp[i];
        if(i != temp.length() - 1){
            cout << "+";
        }
    }
    
    return 0;
}
