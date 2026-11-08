#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
bool cmp(int x,int y)
{
	return x > y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m == 1)
	{
		int mx = 0;
		for(int i = 1;i <= n;i++)
		{
			cin>>a[i];
			mx = max(mx,a[i]); 
		}
		cout<<mx;
		return 0;
	}
	if(m == 2)
	{
		int mx = 0;
		for(int i = 1;i <= n;i++)
		{
			cin>>a[i];
			for(int j = 1;j <= i - 1;j++)mx = max(a[i]&a[j],mx); 
		}
		cout<<mx;
		return 0;
	}
	if(m == n)
	{
		int mx = 0,x;
		cin>>a[1];
		x = a[1];
		for(int i = 1;i <= n;i++)
		{
			cin>>a[i];
			x &= a[i];
		}
		cout<<x;
		return 0;
	}
	//Èôai = 2µÄki´Î·½£º
	for(int i = 1;i <= n;i++)cin>>a[i];
	sort(1 + a,1 + a + n,cmp);
	int x = a[1];
	for(int i = 2;i <= m;i++)x &= a[i];
	cout<<x; 
	return 0;
}
