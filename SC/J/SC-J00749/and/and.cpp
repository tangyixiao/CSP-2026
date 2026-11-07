#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n,m,a[N];

vector<int>f;
bool cmp(int x,int y)
{
	return x>y;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	int ans=0;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)f.push_back(a[i]);
	
	sort(f.begin(),f.end(),cmp);
	
	for(int i=30;i>=1;i--)
	{
		if((f[m-1]>>(i-1))&1)
		{
			ans+=(1LL<<(i-1));
			while(((f.back()>>(i-1))&1)==0)
			{
				f.pop_back();
			}
		}
		else
		{
			int p=(1LL<<(i-1));
			for(auto &v:f)
			{
				v%=p;
			}
			sort(f.begin(),f.end(),cmp);
		} 
	}
	cout<<ans;
	return 0;
}
