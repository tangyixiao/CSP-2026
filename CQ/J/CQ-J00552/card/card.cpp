#include<bits/stdc++.h>
using namespace std;
int b[500005];
bool c[500005];
struct list
{
	int pre,v,nxt;
}a[500005],l[500005];
int tl;
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    long long n,k;
    cin>>n>>k;
    for(long long i = 1;i <= n;i++)
    {
    	cin>>a[i].v;
    	a[i].pre=i-1;
    	a[i].nxt=i+1;
	}
	bool flag=1;
	for(int i = 1;i <= n ;i++)
	{
		if(c[a[i].v]==1)
		{
			flag=0;
			break;
		}
		c[a[i].v]=1;
	}
	if(flag==1)
	{
		for(int i = 1;i <= n;i++)
		{
			b[a[i].v]=i;
		}
		for(int i = 1;i <= k;i++)
		{
			cout<<b[i]<<" ";
		}
		return 0;
	}
	for(long long i = 1;i<= n;i++)
	{
		if(i==n)
		{
			b[a[i].v]++;
			continue;
		}
//		cout<<"1";
		tl=0;
		l[0]={0,0,1};
		for(long long j = i;j<= n;j++)
		{
			l[tl+1]={tl,a[j].v,0};
			tl++;
//			cout<<l[tl].pre<<" "<<tl<<" "<<l[tl].nxt<<endl;
			for(int k = 1;k <= n;k++)
			{
				if(l[k].v==l[tl].v)
				{
					int p=l[k].pre;
					l[p].nxt=tl;
					l[tl].pre=p;
				}
			}
		}
		int cur=l[0].nxt;
//		cout<<"2";
		while(cur!=0)
		{
			b[l[cur].v]++;
			cur=l[cur].nxt;
		}
	}
	for(int i = 1;i <= k;i++)
	{
		cout<<b[i]<<" ";
	}
    return 0;
}
