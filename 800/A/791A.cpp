#include<iostream>
using namespace std;

int main(){
    int l,b;
    cin>>l>>b;

    int min_years=0;
    while(l<=b){
        l=l*3;
        b=b*2;
        min_years++;
    }
    cout<<min_years<<endl;
    return 0;
}