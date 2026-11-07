#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int n,m,b;
	cin>>n>>m;
	int cnt=0,ans=0;
	bool bol=false;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		{
			bol=true;
			if(a[i]>ans)
			{
				ans=a[i];
			}
		}
		else
		{
			if(a[i]%10>cnt)
			{
				cnt=a[i]%10;
				b=a[i];
			}
		}
	}
	if(bol)
	{
		cout<<ans;
	}
	else
	{
		cout<<b;
	}
	return 0;
}
+
