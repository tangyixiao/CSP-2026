#include<bits/stdc++.h>
using namespace std;
int n,m,ans[300005];
struct aaaa
{
	int num,id;
}a[500005],b[500005];
int check(int x,int l,int r)
{
	while(l <= r)
	{
		int mid = (l + r) / 2;
		if (a[b[mid].id].num == x)
		{
			return b[mid].id;
		}
		else if (b[mid].num >= x)
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return 0;
}
bool cmp(aaaa x,aaaa y)
{
	return x.num <= y.num;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i].num;
		a[i].id = i;
		b[i].num=a[i].num;
		b[i].id=a[i].id;
	}
	sort(b + 1,b + n + 1,cmp);
	for (int i = 1;i <= n;i++)
	{
		int p = 1;
		for (int j = i;j <= n;j++)
		{
			int x = check(a[j].num,i,p);
			
		}
	}
	for (int i = 1;i <= m;i++)
	{
		cout << rand() % n << endl;
	}
	return 0;
}
