#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin >> n >> h;
    int a;
    int width = 0;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a > h){
            width += 2;
        } else {
            width++;
        }
    }
    cout << width;
    return 0;
}