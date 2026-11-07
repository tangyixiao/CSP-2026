#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],s[500005],last[300005],last_l[250005],last_r[250005],last_cnt,last_k=1,last_a,lastt,b[300005];
bool nn[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(last[a[i]]==0)
			last[a[i]]=i;
		else
		{
			bool flag=1;
			int l=last[a[i]],r=i-1,k=last_a,t=last_k,a=last_a;
			nn[l]=1;
			for(int i=last_k;i<=l;i++)
			{
				if(flag&&!nn[i])
				{
					flag=0;
					t=i;
					a=k;
				}
				k-=s[i];
			}
			last_k=t;
			last_a=a;
			s[l]+=k;
			s[r+1]-=k;
			for(int i=1;i<=last_cnt;i++)
			{
				if(last_l[i]>l&&last_r[i]<r) 
				{
					s[last_l[i]]-=k;
					s[last_r[i]]+=k;
				}
			}
			for(int i=1;i<=last_cnt;i++)
			{
				if(last_l[i]>l)
					last_l[i]=l;
				if(last_l[i]<r)
					last_r[i]=r;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		lastt-=s[i];
		b[a[i]]+=lastt;
	}
	for(int i=1;i<=m;i++)
		cout<<b[i]<<" ";
	return 0;
}
