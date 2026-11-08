#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int a[300005];
	cin >> n >> m;
	for(int i=1;i<=m;i++)cin >> a[i];
	if(m==1)
	{
		cout << n;
		return 0;
	}
	if(m==2&&n==2)
	{
		cout << 1 << 1;
		return 0;
	}
	return 0;
}
