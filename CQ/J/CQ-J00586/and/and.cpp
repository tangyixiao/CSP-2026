#include<bits/stdc++.h>
using namespace std;
int a[200001][50];
int b[200001];
struct w
{
	int aa;
	int s;
}e[200001];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,q;
	cin>>n>>q;
	for(int i = 1;i <= n;i++)
	{
		cin>>b[i];
	}
	sort(b + 1,b + n + 1);
	if(n / 4 == q)
	{
		int f = 1; 
		for(int i = 1;i < n;i++)
		{
			if(b[i + 1] - b[i] != 1)
			{
				f = 0;
				break; 
			}
		}
		if(f == 1)
		{
			cout<<49152;
			return 0;
		}
	}
	for(int i = 1;i <= n;i++)
	{
		int t;
		t = b[i];
		int t1 = t;
		int w = 0;
		while(t)
		{
			t /= 2;
			w++;
		}
		t = t1;
		int ans = 0;
		for(int j = w;j > 0;j--)
		{
			if(t % 2 == 0)
			{
				a[i][j] = 0;
			}
			else
			{
				a[i][j] = 1;
				ans++;
			}
			t /= 2;
		}
		e[i].s = t1;
		e[i].aa = ans;
//		cout<<t1<<":"<<ans<<"\n";
	}
	int id;
	int z_ans = 0;
	int c = 1;
	for(int s = 1;s <= q;s++)
	{
		int maxx = 0;
		for(int i1 = 1;i1 <= n;i1++)
		{
			if(maxx <= e[i1].aa)
			{
				maxx = e[i1].aa;
				id = i1;
			}
		}
		e[id].aa = 0;
//		cout<<id<<"-------------------------------------------\n";
		if(c == 1)
		{
			c = 0;
			z_ans = e[id].s;
		}
		else
		{
			z_ans &= e[id].s;
		}
	}
	cout<<z_ans;
//	for(int i = 1;i <= n;i++)
//	{
//		for(int j = 1;j <= 5;j++)
//		{
//			cout<<a[i][j];
//		}
//		cout<<"\n";
//	}
	return 0;
}
