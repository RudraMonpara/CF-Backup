#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        for(int i = 0; i < n.size(); i++)
            n[i] = tolower(n[i]);

        if(n == "yes")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}