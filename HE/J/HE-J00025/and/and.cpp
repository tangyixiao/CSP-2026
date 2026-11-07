#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
const int N = 2e5 + 5;
int n,m,a[N],ans;
vector<int> cnt[35];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
		for (int j = 30;j >= 0;j--)
			if (a[i] & (1 << j))
				cnt[j].push_back(a[i]);
	}
	for (int i = 30;i >= 0;i--)
	{
		if (cnt[i].size() >= m)
		{
			sort(cnt[i].begin(),cnt[i].end(),greater<int>());
			ans = cnt[i][0];
			for (int j = 1;j < m;j++)
				ans &= cnt[i][j];
			break;
		}
	}
	cout << ans;
	return 0;
}

