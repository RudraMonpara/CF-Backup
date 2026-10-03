#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a,b;

    int count[n];
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if(i == 0){
            count[i] = b - a;
        } else {
            count[i] = count[i-1] + b - a;
        }
    }
    int max_cap = count[0];
    for(int i=1;i<n;i++){
        if(count[i] > max_cap){
            max_cap = count[i];
        }
    }
    cout << max_cap;
    return 0;
}