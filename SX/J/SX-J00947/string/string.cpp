#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
struct st{
	long long a;
	char b;
}a[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,l=1,r,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].a>>a[i].b;
	}
	l=1;r=n;
	while(l<r)
	{
		if(a[l].b!=a[r].b)
		{
			if(a[l].a<a[r].a)
			{
				s=s+a[l].a;
				l++;
				a[r].a=a[r].a-a[l-1].a;
			}
			else
			{
				s=s+a[r].a;
				r--;
				a[l].a=a[l].a-a[r+1].a;
			}
		}
		else
		{
			if(a[l].a<a[r].a)
			{
				l++;
				a[r].a=a[r].a-a[l-1].a;
			}
			else
			{
				r--;
				a[l].a=a[l].a-a[r+1].a;
			}
		}
	}
	cout<<s;
	return 0;
}