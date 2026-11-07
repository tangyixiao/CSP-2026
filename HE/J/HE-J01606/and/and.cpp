#include <iostream>
#include <cmath>

using namespace std;

int a[200005];
int n,k;
int ma=0;

void f(int now,int less,int ws)
{
	if (less==0)
	{
		ma=max(ma,now);
		return ;
	}
	if (ws<n)
	{
		f((now&a[ws]),less-1,ws+1);
		f(now,less,ws+1);
	}
	return ;
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>k;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for (int i=1;i<=n;i++)
	{
		f(a[i],k-1,i+1);
	}
	cout<<ma;
	return 0;
}
