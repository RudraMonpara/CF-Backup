#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int total_slices = c * d;

    int toasts_from_drink = total_drink / nl;
    int toasts_from_lime = total_slices;
    int toasts_from_salt = p / np;

    int total_toasts = min({toasts_from_drink, toasts_from_lime, toasts_from_salt});

    cout << total_toasts / n << endl;

    return 0;
}
