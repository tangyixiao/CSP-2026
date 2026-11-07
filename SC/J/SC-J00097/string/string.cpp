#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i] >> c[i];
	}
	long long ans=0;
	int l=1,r=n;
	while(l<r)
	{
		while(a[l]>a[r])
		{
			if(c[l]!=c[r])
			{
				ans+=a[r];
			}
			a[l]-=a[r];
			r--;
		}
		if(c[l]!=c[r])
		{
			ans+=a[l];
		}
		a[r]-=a[l];
		l++;
	}
	cout << ans; 
	return 0;
}