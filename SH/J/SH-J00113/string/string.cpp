#include<bits/stdc++.h>
using namespace std;
struct node
{
	long long l;
	char c;
}a[200005];
int n,p;
long long cnt;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i].l >> a[i].c;
	}
	for(int i=1;i<=n;i++)
	{
		while(a[i].l)
		{
			if(a[i].c!=a[n].c)
			{
				cnt+=min(a[i].l,a[n].l);
			}
			if(a[i].l>=a[n].l)
			{
				a[i].l-=a[n].l;
				a[n].l=0;
				n--;
			}
			else
			{
				a[n].l-=a[i].l;
				a[i].l=0;
				break;
			}
		}
	}
	cout << cnt;
	return 0;
}
