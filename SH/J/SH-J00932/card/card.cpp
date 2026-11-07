#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	bool flag=1;
	int cnt1=0,cnt2=0;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		if(a[i]==1)cnt1++;
		else if(a[i]==2)cnt2++;
		if(a[i]<a[i-1])flag=0;
	}
	if(flag)
	{
		for(int i=1;i<=n;i++)
		{
			if(i>1&&a[i]!=a[i-1])cout << i-1 << " ";
		}
		cout << n;
		return 0;
	}
	if(a[n]==1)
	{
		cout << n << " " << cnt2;
	}
	else
	{
		cout << cnt1 << " " << n;
	}
	return 0;
}
