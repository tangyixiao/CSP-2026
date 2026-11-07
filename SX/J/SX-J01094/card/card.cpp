#include <bits/stdc++.h>
int m=0,n=0,a[500005]= {},b[300005]= {}, first[200005]={};
using namespace std;
struct stak
{
    int t;
    int c[500005];
    void zrsqj(int k)
    {
        c[t+1]=k;
        t++;
    }
    void ldsqj()
    {
        c[t]=0;
        t--;
    }
    bool jmxsqj()
    {
        return (t==-1);
    }
    int wjfsqj()
    {
        return t;
    }
};


int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    stak card;
    card.t=-1;
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int j=0; j<=n; j++)
    {
    	for(int i=0;i<m;i++) first[i]=0;
        for(int i=j; i<n; i++)
        {
            if(!first[a[i]])
            {
                while(1)
                {
                    if(card.wjfsqj()==a[i])
                    {
                        card.ldsqj();
                        break;
                    }
                    else card.ldsqj();
                }
            }
            card.zrsqj(a[i]);
            first[a[i]]=1;
        }
        while(!card.jmxsqj())
        {
            b[card.wjfsqj()]++;
            card.ldsqj();
        }
    }
    for(int i=0; i<m; i++) cout<<b[i]<<' ';
    fclose(stdin);
    fclose(stdout);
}