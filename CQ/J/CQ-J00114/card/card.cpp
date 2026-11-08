#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],ans[300001],cov[500001];
vector<int> pos[300001];
bool vis[500001];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(n<=2000)
	{
		for(int i=1;i<=n;i++)
		{
			vector<int> v;
			set<int> st;
			for(int j=i;j<=n;j++)
			{
				if(st.find(a[j])!=st.end())
				{
					while(1)
					{
						if(v.back()==a[j])
							break;
						if(st.find(v.back())!=st.end())
							st.erase(v.back());
						v.pop_back();
					}
				}
				else
					st.insert(a[j]),v.push_back(a[j]);
			}
		for(int x:v)
			ans[x]++;
		} 
		for(int i=1;i<m;i++)
			cout<<ans[i]<<' ';
		cout<<ans[m];
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		if(pos[a[i]].size()==0)
			pos[a[i]].push_back(i);
		else
		{
			for(int j=pos[a[i]].back();j<i;j++)
				cov[j]++;
//			cerr<<pos[a[i]].back()<<' '<<i<<'\n';
			pos[a[i]].push_back(i);
		} 
	}	
	for(int i=1;i<=m;i++)
		ans[i]=pos[i].back(),vis[pos[i].back()]=1;
	for(int i=1;i<=n;i++)
		if(vis[i])
			ans[a[i]]-=cov[i];	
	for(int i=1;i<m;i++)
		cout<<ans[i]<<' ';
	cout<<ans[m];
	return 0;
}
/*
好像简单题？
5 3
1 2 1 2 3

2 4 5

唯一要做的是判断 i 类卡片是否出现在一个由两个 j 类构成的区间中
用差分数组标记覆盖区间，从左到右扫，看 i 的最后一个的位置是否被覆盖 
可行？ 
no 
10 3
3 1 2 1 3 2 3 1 2 1
0 0 0 0 0 0 3 0 3 10
1 2 3 4 5 6 7 8 9 10

输了 
*/
