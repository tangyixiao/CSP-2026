#include <bits/stdc++.h>
#define int long long
#define PII pair<int,int> 
using namespace std;
const int N=5e5+5;
struct node
{
	int x,num;
}b[N];
int n,m,a[N],tot,cnt[N]; 
int top,sst[N];
bool p[N];
PII st[N];
void solve1()
{
	for (int i=1;i<=top;i++)
	{
		int tp=0;
		for (int j=1;j<=m;j++) p[j]=0;
		for (int j=i;j<=top;j++)
		{
			if (p[b[j].x])
			{
				while (tp&&sst[tp]!=b[j].x)
				{
					p[sst[tp]]=0;
					tp--;
				}
			}
			else
			{
				sst[++tp]=b[j].x;
				p[b[j].x]=1;
			}
		}
		for (int j=1;j<=tp;j++)
			cnt[sst[j]]+=b[i].num;
	}
	for (int i=1;i<=m;i++)
		cout << cnt[i] << " "; 
}
void solve2()
{
	int s=0;
	for (int i=1;i<=top;i++)
	{
		s+=b[i].num;
		cout << s << " ";
	}
}
void solve3()
{
	for (int i=1;i<=top;i++)
	{
		if ((top-i+1)&1)
		{
			cnt[b[i].x]+=b[i].num;
		}
		else
		{
			cnt[b[i].x]+=b[i].num;
			cnt[b[i+1].x]+=b[i].num;
		}
	}
	for (int i=1;i<=m;i++)
	{
		cout << cnt[i] << " ";
	}
}
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	int flag1=1;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i];
		if (a[i]<a[i-1]) flag1=0;
	}
	for (int i=1;i<=n;i++)
	{
		if (top&&st[top].first==a[i])
		{
			st[top].second++;
		}
		else
		{
			st[++top].first=a[i];
			st[top].second=1;
		}
	}
	for (int i=1;i<=top;i++)
	{
		b[i].x=st[i].first;
		b[i].num=st[i].second;
//		cout << b[i].x << " " << b[i].num << "\n";
	}
	if (top<=5000)
		solve1();
	else if (flag1)
		solve2();
	else if (m<=2)
		solve3();
	else
		solve1();
}
/*
1.可以先把串约化，因为相邻的并且相同的一定会约完 ，目前串一定是相邻的不相同，并记录
连续的多少个 
2.
n<=5000 模拟
A性质:前缀和 
m<=2:长度为奇数贡献第1个，偶数贡献前2个 
1 1 2 2 1 3 3 2
1 2 1 3 2
1 3 2
1 2 2 1 1 2
1 2 
2
2
1 2
1 2
2 


10 3
3 1 2 1 3 2 3 1 2 1

10 2
1 2 2 1 1 2 2 1 2 1
*/
