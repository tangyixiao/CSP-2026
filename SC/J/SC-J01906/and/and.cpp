#include<bits/stdc++.h>
using namespace std;
int a[200010][2],n,m,ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i][0];
		int t=a[i][0],j=2;
		while(t)
		{
			a[i][1]+=t%2*j;
			t/=2;
			j++;
		}
	}
	int t=m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[j][1]<a[j+1][1]) 
			{
				swap(a[j][0],a[j+1][0]);
				swap(a[j][1],a[j+1][1]);
			}
		}
	}
	int v=m-1;
	ans=a[1][0];
	while(v--)
	{
		ans=a[m-v][0]&ans;
	}
	cout<<ans;
}