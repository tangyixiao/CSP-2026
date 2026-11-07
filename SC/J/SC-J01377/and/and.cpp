#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int n, m;
int a[N];

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	vector<int> num;
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]), num.push_back(a[i]);
	int ans = 0;
	for (int i = 30; i >= 0; i--)
	{
		vector<int> tmp;
		for (int j : num)
		{
			if ((j >> i) & 1) tmp.push_back(j);
		}
		if (tmp.size() >= m)
		{
			swap(tmp, num);
			ans += (1 << i);
		}
	}
	printf("%d\n", ans);
	return 0;
}