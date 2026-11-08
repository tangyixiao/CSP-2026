#include<iostream>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[10000],sum=0;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[n];
	}
	for(int i=n;i>=1;i--)
	{
		sum = i;
	}
	for(int i=1;i<=n;i++)
	{
		if(sum==a[n])
		{
			cout << 0;
		}
		if(a[0] != a[n])
		{
			a[n] = a[0];
			cout << a[n];
		}
	}
	return 0;
}
