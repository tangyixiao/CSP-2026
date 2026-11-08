#include<bits/stdc++.h>
using namespace std;
int n,a[100000005],x,ans,sum;
string str,y;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>x>>y;
		sum+=x;
		for (int j=1;j<=x;j++)
		{
			str+=y;
		}
	}
	for(int i=0;i<sum/2;i++)
	{
		if(str[i]!=str[sum-i-1])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
