// 希望ccf的机子可以跑快点 
#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n,m,a[N];
set <int> s[35];
bool check(int x)
{
	set <int> tmp;
	for(int i = 1;i <= n;i ++) tmp.insert(i);
	for(int i = 0;i < 30;i ++)
	{
		if(x & (1 << i))
		{
			set <int> tmp1;
			for(int j : tmp)
			{
				if(s[i].find(j) != s[i].end())
				{
					tmp1.insert(j);
				}
			}
			tmp = tmp1;
		}
	}
	return tmp.size() >= m;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++) cin >> a[i];
	for(int i = 1;i <= n;i ++)
	{
		for(int j = 0;j < 30;j ++)
		{
			if(a[i] & (1 << j))
			{
				s[j].insert(i);
			}
		} 
	}
	int l = 0,r = 1 << 30;
	while(l <= r)
	{
		int mid = (l + r) >> 1;
		if(check(mid)) l = mid + 1;
		else r = mid - 1;
	}
	cout << r;
}
