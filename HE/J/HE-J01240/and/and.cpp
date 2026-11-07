#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> now,cont;
int n,m,ans;
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		now.push_back(x);
	}
	for(int i=30;i>=0;i--)
	{
		cont.clear();
		for(auto x:now)
			if(x&(1<<i))cont.push_back(x);
		if(cont.size()>=m)
		{
			ans+=1<<i;
			swap(now,cont);
		}
	}
	cout<<ans;
}//ÎÒÊÇ 6543333333311111111777777775h5h5h5h5h5h5h5h 
