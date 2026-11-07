#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ms[300005],z[300005];
vector<vector<int>> realise;
vector<int>path;
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    if(m==1)
    {
        cout << n;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        deque<int>dq;
        for(int j=i;j<=n;j++)
        {
            if(ms[a[j]]!=0)
            {
                while(ms[a[j]]!=0)
                {
                    ms[dq.back()]=0;
                    dq.pop_back();
                }
            }
            dq.push_back(a[j]);
        }
        int j=0;
        while(!dq.empty())
        {
            path.push_back(dq.front());
            dq.pop_front();
        }
        realise.push_back(path);
    }

    for(int i=1;i<=m;i++)
    {
        for(int x=0;x<realise.size();x++)
        {
            for(int y=0;y<realise[x].size();y++)
            {
                z[realise[x][y]]++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout << z[i] << " ";
    }



    return 0;
}


