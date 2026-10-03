#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int c1=0,c2=0;
        int first=a[0];
        int b=-1;
        bool flag=true;

        for(int i=0;i<n;i++){
            if(a[i]==first) c1++;
            else if(b == -1){
                b=a[i]; 
                c2++;
            }
            else if(b==a[i]) c2++;
            else{
                flag=false;
                break;
            }
        }

        if(!flag) cout << "No\n";
        else if(b ==-1 ) cout << "Yes\n";
        else if(abs(c1-c2)<=1)cout << "Yes\n";
        else cout << "No\n";
    }
}