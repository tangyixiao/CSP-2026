#include <bits/stdc++.h>
using namespace std;
using LL=long long;
const int N=2e5+4;
int a[N],b[N];
vector<int>g[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		int x=a[i];
		int j=0;
		while(x)
		{
			int p=x%2;
			if(p)
			{
				g[j].push_back(a[i]);
			}
			j++;
			x/=2;
		}
	}
	int ans=0;
	int c=0;
	for(int i=31;i>=0;i--)
	{
		int l=g[i].size();
		if(l>=m)
		{
			for(auto y:g[i])
			{
				b[++c]=y;
			}
			break;
		}
	}
	sort(b+1,b+1+c);
	//for(int i=1;i<=c;i++)cout<<b[i]<<endl;
	ans=b[c]; 	
	for(int i=c;i>c-m;i--)
	{
		ans=ans&b[i];
	}
	cout<<ans;
	return 0;
}
//12345 123456