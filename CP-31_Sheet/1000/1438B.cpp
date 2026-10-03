#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        vector<long long> b(n);
        for(long long i=0;i<n;i++)
            cin >> b[i];
            
            
        unordered_set<long long> s;
        for(long long i=0;i<n;i++)
            s.insert(b[i]);

        if(s.size() < n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}