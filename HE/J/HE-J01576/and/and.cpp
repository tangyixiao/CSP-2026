#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    long long n,m;
    cin>>n>>m;
    vector< vector<bool> > a(n,vector<bool> (31));
    for(long long i=0;i<n;i++)
    {
        long long tmp;
        cin>>tmp;
        long long j=0;
        while(tmp)
        {
            a[i][j]=tmp%2;
            tmp=tmp>>1;
            j++;
        }
    }
    vector<bool> b(n,true);
    long long ans=0,mp=(long long)1<<30;
    for(long long i=30;i>=0;i--)
    {
        long long tmp=0;
        vector<bool> tmb(b);
        for(long long j=0;j<n;j++)
        {
            if(b[j])
            {
                if(a[j][i])
                {
                    tmp++;
                }
                else
                {
                    tmb[j]=false;
                }
            }
        }
        if(tmp>=m)
        {
            ans+=mp;
            b=tmb;
        }
        mp=mp>>1;
    }
    cout<<ans;
    return 0;
}
