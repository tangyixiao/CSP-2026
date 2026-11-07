#include <bits/stdc++.h>
using namespace std;
bool cmp(int x,int y)
{
	return x>y;
}
bool cmp2(int x,int y)
{
	return x<y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n,a[200005],ans1,ans2,ans3,ans4;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	sort(a+1,a+1+n,cmp);
	ans1=a[1];
	for(int i=2;i<=m;i++)
	{
		int p=ans1&a[i];
		if(p==0)
		{
			m++;
			if(m>n)
			{
				ans1=0;
				break;
			}
			continue;
		}
		else
		{
			ans1&=a[i];
		}
	}
	ans2=a[2];
	for(int i=1;i<=m;i++)
	{
		if(i==2)
		{
			continue;
		}
		int p=ans2&a[i];
		if(p==0)
		{
			m++;
			if(m>n)
			{
				ans2=0;
				break;
			}
			continue;
		}
		else
		{
			ans2&=a[i];
		}
	}
		ans3=a[3];
	for(int i=1;i<=m;i++)
	{
		if(i==3)
		{
			continue;
		}
		int p=ans3&a[i];
		if(p==0)
		{
			m++;
			if(m>n)
			{
				ans3=0;
				break;
			}
			continue;
		}
		else
		{
			ans3&=a[i];
		}
	}
		ans4=a[4];
	for(int i=1;i<=m;i++)
	{
		if(i==4)
		{
			continue;
		}
		int p=ans4&a[i];
		if(p==0)
		{
			m++;
			if(m>n)
			{
				ans4=0;
				break;
			}
			continue;
		}
		else
		{
			ans4&=a[i];
		}
	}
	cout << max(ans1,max(ans2,max(ans3,ans4))); 
	return 0;
}
