#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500010],b[300010],c[500010],l=1,e,x;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		memset(c,0,sizeof(c));
		x++;
		c[1]=a[x];
		for(int j=i;j<=n;j++)
		{
			e=0;
			for(int k=1;k<=l;k++)
			{
				if(a[j]==c[k])
				{
					for(int q=k+1;q<=l;q++)
						c[q]=0;
					l=k;
					e=1;
					break;
				}
			}
			if(e==0)
			{
				l++;
				c[l]=a[j]; 
			}
//			for(int v=1;v<=l;v++)
//				cout<<c[v]<<" ";
//			cout<<"\n";
		}
		for(int t=1;t<=l;t++)
			b[c[t]]++;
	}
	for(int i=1;i<=m;i++)
		cout<<b[i]<<" ";
	return 0;
}
