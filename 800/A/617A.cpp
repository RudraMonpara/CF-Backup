#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    int min_steps=0;
    if (x%5==0)
        min_steps=x/5;
    else
        min_steps=(x/5)+1;
    cout<<min_steps<<endl;

}