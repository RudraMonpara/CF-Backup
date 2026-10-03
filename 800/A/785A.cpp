#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int result=0;
    while(n--){
        string s;
        cin>>s;
        if(s=="Tetrahedron") result+=4;
        else if(s=="Cube") result+=6;
        else if(s=="Octahedron") result+=8;
        else if(s=="Dodecahedron") result+=12;
        else if(s=="Icosahedron") result+=20;
    }
    cout<<result;
    return 0;   
}