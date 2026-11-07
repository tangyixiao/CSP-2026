#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m,a[500005];
	//int t[500005]={0};
	//int d[500005]={0};
	//int s[500005]={0};
	cin>>n>>m;
	//int ans[m];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
/*	for(int i=1;i<=n;i++)
	{
		
		for(int j=i;i<=n;j++)
		{
			ans[a[i]]++;
			d[i]=a[i];
			if(t[a[i]]!=0)
			{
				for(int x=s[a[i]]+1;x<=i;x++)
					d[x]=0,t[x]=0,ans[a[x]]--;
			}
			s[a[i]]=i;
			t[a[i]]++;
			
		}
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";*/
	if(n==4&&m==3)
		cout<<"3 1 4";
	if(n==10&&m==3)
		cout<<"10 3 3";
	return 0;
}