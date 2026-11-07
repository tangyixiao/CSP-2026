#include<bits/stdc++.h>
using namespace std;
long long n,sum,ans;
long long a[100010];
char b[1000010],c[100000010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++)
		{
			sum++;
			c[sum]=b[i];
		}
	}
	int l=1,r=sum;
	while(l<r)
	{
		if(c[l]!=c[r])
		{
			ans++;
		}
		l++,r--;
	}
	cout<<ans;
	return 0;
}
