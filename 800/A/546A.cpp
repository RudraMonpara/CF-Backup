#include <iostream>
using namespace std;

int main(){
    int k,w,n;
    cin>>k>>w>>n;
    int total_cost = k * n * (n + 1) / 2;
    if(total_cost > w){
        cout<<total_cost - w<<endl;
    }
    else{
        cout<<0<<endl;
    }
}