#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],cnt = 0,b[300005];
bool added[300005];
vector<long long> lst;
int main()
{
	// 快读 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	// 主代码 
	cin>>n>>m;
	for (long long i = 1;i <= n;i++) cin>>a[i];
	for (long long i = 1;i <= n;i++)
	{
		memset(added,0,sizeof added);
		lst.clear();
		for (long long j = i;j <= n;j++)
		{
			for (auto it = lst.begin();it != lst.end();it++)
			{
				if (*it == a[j])
				{
					lst.erase(it,lst.end());
					break;
				}
			}
			lst.push_back(a[j]);
		}
		for (long long j = 0;j < lst.size();j++)
		{
			if (!added[lst[j]])
			{
				b[lst[j]]++;
				added[lst[j]] = 1;
			}
		}
	} // 无他，唯有模拟
	for (long long i = 1;i <= m;i++)
	{
		if (i > 1) cout<<' ';
		cout<<b[i];
	}
	return 0;
}
// 我希望能拿到一点分，不是0分就好啊 
