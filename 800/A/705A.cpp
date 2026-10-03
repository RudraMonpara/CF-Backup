#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s1="I hate ";
    string s2="I love ";

    for(int i=1;i<=n;i++){
        if(i%2==1){
            cout << s1;
        } else {
            cout << s2;
        }
        if(i<n){
            cout << "that ";
        }
    }
    cout << "it" << endl;
    return 0;
}