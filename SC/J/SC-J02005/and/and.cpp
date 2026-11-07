#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N],cnt[31];
vector<int> ans,tmp;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie();
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,res=0,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i],ans.push_back(i);
	for(int i=30;i>=0;i--)
	{
		tmp.clear();
		for(auto j:ans)
		{
			if(a[j]&(1<<i))
			{
				tmp.push_back(j);
			}
		}
		if((int)ans.size()<m) break;
		if((int)tmp.size()>=m) ans=tmp;
	}
	if((int)ans.size()>=m)
	{
		for(int i=30;i>=0;i--)
		{
			bool flag=1;
			for(auto j:ans)
				if(!(a[j]&(1<<i)))
				{
					flag=0;
					break;
				}
			if(flag) res+=(1<<i);
		}
	}
	cout<<res;
	return 0;
}