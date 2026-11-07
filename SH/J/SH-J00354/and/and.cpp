#include <bits/stdc++.h>
using namespace std;
int n,m,a[20005],a1[20005];
long long b[100000],sum;
bool flaga = true,flagb = true;
bool cmp(int x,int y)
{
	return x > y;
}
void do1()
{
	int sum = a[1] & a[2];
	for(int i = 3;i <= n;i++)
	{
		sum = (sum & a[i]);
	}
	cout << sum;
}
void do2()
{
	int maxa = 0;
	for (int i = 1;i <= n;i++)
	{
		maxa = max(maxa,a[i]);
	}
	cout << maxa;
}
void do3()
{
	sort(a[n] + 1,a[n] + 1 + n,cmp);
	int sum = a[1] & a[2];
	for (int i = 3;i <= m;i++)
	{
		sum = (sum & a[i]);
	}
	cout << sum;
}
int main()
{
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
		a1[i] = a[i] + 1;
	}
	for (int i = 1;i <= n;i++)
	{
		while(a1[i])
		{
			if (a1[i] % 2 == 1)
			{
				flaga = false;
				break;
			}
			else
			{
				a1[i] /= 2;
			}
		}
	}
	for(int i = 1;i <= n;i++)
	{
		if(a1[i] == i)
		{
			flagb = true;
		}
		else
		{
			flagb = false;
			break;
		}
	}
	if (m == n)
	{
		do1();
	}
	if (m == 1)
	{
		do2();
	}
	if (flaga)
	{
		do3();
	}
	if(flagb)
	{
		do3();
	}
	sort(a[1] + 1,a[n] + 1 + n,cmp);
	sum = a[1] & a[2];
	for (int i = 1;i <= n;i++)
	{
		sum = (sum & a[i]);
	}
	return 0;
}
