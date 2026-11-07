#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[300005],a1[500005],sum[300005];
int main()
{
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[a[i]]+=1;
	}
	int jj=0;
//	while(m)
//	{
//		jj=0;
//		for(int i=1;i<=n;i++)
//		{
//			a1[i]=a[i];
//		}
//		for(int i=1;i<=n;i++)
//		{
//			if(jj==a[i])jj=0;
//			if(jj!=a[i]&&jj!=0)	
//			{
//				b[a[i]]--;
//				a1[i]=0;
//				continue;
//			}
//			if(b[a[i]]==1)continue;
//			else
//			{
//				a1[i]=0;
//				b[a[i]]--;
//				jj=a[i];
//			}
//		}
//		sort(a1+1,a1+1+n);
//		for(int i=1;i<=n;i++)
//		{
//			if(a1[i]==0)break;
//			sum[a1[i]]++;
//		}
//		m--;
//	}
	for(int i=1;i<=m;i++)
	{
		cout<<sum[i]<<" ";
	}
	return 0;
}
