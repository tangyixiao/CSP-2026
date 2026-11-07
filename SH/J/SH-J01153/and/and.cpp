#include <bits/stdc++.h>
using std::cin;using std::vector;using std::cout;using std::ios;
#define int long long
#define fastread ios::sync_with_stdio(false),cin.tie(0);
#define freo(a,b) freopen(a,"r",stdin),freopen(b,"w",stdout);
#define pb push_back
#define fi first
#define se second

// int a[200005];
vector<int> a;
vector<int> b;


signed main()
{
	freo("and.in","and.out")
	fastread
	
	a.reserve(200005);
	b.reserve(200005);
	int n,m;
	cin>>n>>m;
	for (int i=0;i<n;i++)
	{
		a.push_back(0);
		cin>>a[i];
	}
	
	for (int i=1ll<<32;i;i>>=1)
	{
		for (int j:a)
		{
			if (i&j) b.push_back(j);
		}
		if ((int)b.size()<m)
		{
			b.clear();
		}
		else
		{
			a.clear();
			swap(a,b);
		}
	}
	int ans=0xffffffffffffffffll;
	for (int i:a) ans&=i;
	cout<<ans;
}
