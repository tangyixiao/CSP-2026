#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int> 
#define endl '\n'
char c[200005];
int a[200005];
map<char,int> b;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		sum+=a[i];
		b[c[i]]+=a[i];
	}
	if(sum%2==0)
	{
		int mx=-1;
		for(char i='a';i<='z';i++)
		{
			mx=max(mx,b[i]);
		}
		cout<<sum-mx;
	}
	else
	{
		int l=1,r=n;
		int ans=0;
		while(l<r&&l<=n&&r>=1)
		{
			if(a[l]<=a[r])
			{
				a[r]=a[r]-a[l];
				if(c[l]!=c[r]) ans+=a[l];
				l++;
			}
			else
			{
				a[l]=a[l]-a[r];
				if(c[l]!=c[r]) ans+=a[r];
				r--;
			}
		}
		cout<<ans;
	}
	return 0;
}