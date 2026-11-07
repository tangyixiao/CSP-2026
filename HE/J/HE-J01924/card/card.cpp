#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;


int main()
{
    iostream::sync_with_stdio(false);
    cout.tie(nullptr);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);

    int n,m;
    cin >> n >> m;

    vi arr(n);
    vi lst(n,0);
    vi tmp(m,0);

    for(int i = 0; i<n; i++) cin >> arr[i];
    for(int i =n-1; i>=0; i--)
    {
        if(tmp[arr[i]]) lst[i] = tmp[arr[i]];
        else tmp[arr[i]] = i;
    }

    vi ans(m+2,0);


    vii f(n+3,vi(m+2,0));
    vi tms(n+1,0);

    for(int i = n-1; i>=0; i--)
    {
        for(int j = i; j<n; j++)
        {
            if(i < j)
            {

                for(int k = 1; k<=m; k++)
                {
                    f[i][k] += f[j][k];
                    ans[k] += f[i][k];
                }
                break;

            }

            if(!lst[j]) f[i][arr[j]]++;
            else j = lst[j] -1;
        }

    }

    for(int k = 1; k<=m; k++)
    {
        ans[k] += f[n-1][k];
    }


    for(int i = 1; i<=m; i++) cout << ans[i] << " ";
    return 0;
}
