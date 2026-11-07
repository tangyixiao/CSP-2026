#include <bits/stdc++.h>
using namespace std;

int n,m,a[210000],c[210000][31],lrn[210000];
int cbt[31];
vector<int> v[31];

bool cmp(int x,int y){return x > y;}

int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n >> m;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++)
    {
        int y = a[i];
        while(y)
        {
            lrn[i]++;
            c[i][lrn[i]] = y % 2;
            y /= 2;
        }
        for(int j = 30;j >= 0;j--)
        {
            if(c[i][j] == 1)
            {
                cbt[j]++;
                v[j].push_back(a[i]);
            }
        }
    }
    int ams = 0;
    for(int i = 30;i >= 0;i--)
    {
        if(cbt[i] < m)
        {
            continue;
        }
        else
        {
            sort(v[i].begin(),v[i].end(),cmp);
            int res = v[i][0];
            int xnt = 1;
            bool ok = false;
            for(auto y : v[i])
            {
                if(xnt == 1 && !ok)
                {
                    ok = true;
                    continue;
                }
                if(xnt == m)
                {
                    break;
                }
                res = res & y;
                xnt++;
            }
            ams = max(ams,res);
        }
    }
    cout << ams;
}
