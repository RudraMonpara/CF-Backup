#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int len = 0;
        int count = 0;

        for(int i = 0; i < n; i++){
            if(a[i] == 1){
                len = max(len, count);
                count = 0;
            } else {
                count++;
            }
        }
        len = max(len, count);

        cout << len << endl;
    }
    return 0;
}