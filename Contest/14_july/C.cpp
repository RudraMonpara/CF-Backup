#include <bits/stdc++.h>
using namespace std;

long long swap(long long a, long long b){
    long long temp=a;
    a=b;
    b=temp;

    return a,b;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n,x,y;
        cin >> n >> x >> y;

        vector<long long> p(n+1);
        for (long long i = 1; i <= n; i++)
        {
            cin >> p[i];
        }

        vector<vector<long long>> g(n + 1);

        for (long long i = 1; i <= n; i++) {
            if (i + x <= n) {
                g[i].push_back(i + x);
                g[i + x].push_back(i);
            }
            if (i + y <= n) {
                g[i].push_back(i + y);
                g[i + y].push_back(i);
            }
        }

        vector<long long> comp(n + 1, -1);
        long long id = 0;

        for (long long i = 1; i <= n; i++)
        {
            if (comp[i] != -1)
                continue;

            queue<long long> q;
            q.push(i);
            comp[i] = id;

            while (!q.empty())
            {
                long long v = q.front();
                q.pop();

                for (long long u : g[v])
                {
                    if (comp[u] == -1)
                    {
                        comp[u] = id;
                        q.push(u);
                    }
                }
            }

            id++;
        }

        bool check = true;

        for (long long i = 1; i <= n; i++)
        {
            if (comp[i] != comp[p[i]])
            {
                check = false;
                break;
            }
        }

        cout << (check ? "YES" : "NO") << endl;
    }
    return 0;
}