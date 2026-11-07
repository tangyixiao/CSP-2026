#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n, c,ans=0,sum=0;
	char b,a[100000005];
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>c>>b;
		sum+=c;
		for(int j=1;j<=c;j++)
		{
			a[j]=b;
		}
	}
	int shu=sum/2,q=1;
	for(int i=shu;i<=sum;i++)
	{
		if(a[i+q]!=a[i-q])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
