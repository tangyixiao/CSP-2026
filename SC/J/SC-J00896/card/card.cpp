#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;

//main
vector <int> G[N];
int f[N],ls[N],an[N];
int n,m;
//

int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 1;i<=n;i++)
    {
        cin >> f[i];
        ls[f[i]] = i;
        G[f[i]].push_back(i);
    }
    ls[0] = -1;
    for(int i = 1;i<=n;i++)
    {
        if(ls[f[i]] != i)   continue;
        an[f[i]] = G[f[i]].size();
        for(int x:G[f[i]])  if(ls[f[x-1]] == x-1)   an[f[i]] += an[f[x-1]];
    }
    for(int i = 1;i<=m;i++) cout << an[i] <<" ";
    return 0;
}