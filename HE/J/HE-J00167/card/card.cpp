#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
long long n,m,a[N],aa[N],ans[N],num[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>aa[i];
	for(int i=1;i<=n;i++)
	{
		for(int ll=1;ll<=n;ll++)
		{
			a[ll]=aa[ll];
			//cout<<aa[ll]<<" ";
		}//cout<<endl;
		for(int j=i;j<=n;j++)
		{
			for(int k=i;k<j;k++)
			{
				bool ppp=1;
				if(a[k]==a[j])
				{
					ppp=0;
					for(int p=k;p<j;p++)
					{
						a[p]=0;
		
					}
				}
				if(ppp=0) break;
			}
		}
		for(int yy=i;yy<=n;yy++)
		{
			if(a[yy]!=0) ans[a[yy]]++;
			
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
} 
