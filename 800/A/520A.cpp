
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    set<char> st;

    for (char c : s)
        st.insert(tolower(c));

    cout << (st.size() == 26 ? "YES" : "NO");
}

