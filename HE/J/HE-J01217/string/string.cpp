#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;

int n,a[N],b[N],tot,zb[N];
char c[N],d[N],zd[N]; 
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	int L=0;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i] >> c[i];
		L+=a[i];
	}
	int sum=0;
	char f='A';
	for (int i=1;i<=n;i++)
	{
		if (f==c[i])
			sum+=a[i];
		else 
		{
			if (f=='A') 
			{
				f=c[i];
				sum=a[i];
				continue;
			}
			b[++tot]=sum;
			d[tot]=f;
			f=c[i];
			sum=a[i];
		}
	}
	b[++tot]=sum;
	d[tot]=f;
	int mid=0;//第几组 
	int pos=0;//组里的第几位 
	int s=0;
	for (int i=1;i<=n;i++)
	{
		s+=b[i];
		if (s>=(L+1)/2) 
		{
			mid=i;
			s-=b[i];
			pos=(L+1)/2-s;
			break;
		}
	}
	for (int i=1;i<mid;i++)
	{
		zb[i]=b[i];
		zd[i]=d[i];
	} 
	for (int i=tot;i>mid;i--)
	{
		zb[i+1]=b[i];
		zd[i+1]=d[i];
	} 
	zd[mid]=d[mid];
	zd[mid+1]=d[mid];
	zb[mid]=pos;
	zb[mid+1]=b[mid]-pos;
	int l=1,r=tot+1; 
	int kl=1,kr=1;
	int ans=0;
	while (l<=mid&&r>=mid+1)
	{
		int ls=zb[l]-kl+1;
		int rs=zb[r]-kr+1;
		int mn=min(ls,rs);
		if (zd[l]==zd[r])
		{
			if (ls==mn)
			{
				l++;
				kl=1;
			}
			else
				kl+=mn;
			if (rs==mn)
			{
				r--;
				kr=1;
			}
			else
				kr+=mn;
		} 
		else
		{
			ans+=mn;
			if (ls==mn)
			{
				l++;
				kl=1;
			}
			else
				kl+=mn;
			if (rs==mn)
			{
				r--;
				kr=1;
			}
			else
				kr+=mn;
		}
	}
	cout << ans;
}
/*
先把相邻的一样的合到一块 
找到中间的块 
把他分成两块避免分讨 
左右两边维护指针扫 



3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

4
1 a
1 c
1 c
1 d

2
1 a
1 b

9
1 a
1 b
1 c
1 d
1 e
1 f
1 g
1 h
1 j
*/

