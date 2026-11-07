#include <bits/stdc++.h>
using namespace std;

int a[200005];
char c[200005];

int main()
{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	int l = 1,r = n;
	long long ans=0;
	while(l<r)
	{
		if(c[l]==c[r])
		{
			if(a[l]>a[r])
			{
				a[l]-=a[r--];
			}
			else if(a[r]>a[l])
			{
				a[r]-=a[l++];
			}
			else
			{
				r--;
				l++;
			}
		}
		else
		{
			if(a[l]>a[r])
			{
				ans+=a[r];
				a[l]-=a[r--];
			}
			else if(a[r]>a[l])
			{
				ans+=a[l];
				a[r]-=a[l++];
			}
			else
			{
				ans+=a[r];
				r--;
				l++;
			}
		}
	}
	cout << ans;
	return 0;
}

