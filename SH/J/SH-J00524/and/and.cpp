#include <bits/stdc++.h>
using namespace std;
int s1[35],s2[35];
int n ,m;
int maxn = 0;
int a[200005];
int maxx = 0;
int cnt[5];
int ad(int a,int b)
{
	memset(s1,0,sizeof(s1));
	memset(s2,0,sizeof(s2));
	int cur1 =1;
	while(a>0)
	{
		s1[cur1] = a%2;
		a/=2;
		cur1++; 
	}
	int cur2 =1;
	while(b>0)
	{
		s2[cur2] = b%2;
		b/=2;
		cur2++; 
	}	
	int num = 0;
	for(int i = max(cur1,cur2); i >=1; i--)
	{
		int f =0;
		if(s1[i]==1&&s2[i] == 1)
		{
			f = 1;
		}
		num = num*2+f;
	}
	return num;
}
void dfs(int now,int step,int num)
{
	
	if(step > m) 
	{
		maxn =max(maxn,num);
		return;
	}
	if(now > n) return;
	dfs(now+1,step,num);
	if(step == 1)
	{
		dfs(now+1,step+1,a[now]);
	}
	num = ad(num,a[now]);
	dfs(now+1,step+1,num);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		maxx = max(a[i],maxx);
	}
	if(n<=20)
	{
		dfs(1,1,0);
		cout << maxn;
		return 0;
	}
	if(n<=2000)
	{
		if(m==1)
		{
			for(int i = 1; i <= n; i++)
			{
				maxn = max(maxn,a[i]);
			}
			cout << maxn;
			return 0;
		}
		if(m==n)
		{
			int num = a[1];
			for(int i = 2; i <= n; i++)
			{
				num = ad(num,a[i]);
			}
			cout <<num;
			return 0;
		}
		if(m==2)
		{
			dfs(1,1,0);
			cout << maxn;
			return 0;
		}
	}
	if(m==n-1)
	{
		sort(a+1,a+n+1);
		int num = a[2];
			for(int i =3; i <= n; i++)
			{
				num = ad(num,a[i]);
			}
			cout <<num;
			return 0;
	}
	else
	{
		if(maxx<4)
		{
			sort(a+1,a+n+1);
			for(int i = 1; i <= n; i++)
			{
				cnt[a[i]]++;
			}
			if(m <=cnt[3])
			{
				cout << 3;
				return 0;
			}
			else if(m <=cnt[3]+cnt[2])
			{
				cout << 2;
				return 0;
			}
			else if(m <=cnt[3]+cnt[1])
			{
				cout << 1;
				return 0;
			}
			else
			{
				cout << 0;
				return 0;
			}
		}
		else
		{
	
			sort(a+1,a+n+1);
			cout << a[n+1-m];
			return 0;
		}
	}
	return 0;
}
