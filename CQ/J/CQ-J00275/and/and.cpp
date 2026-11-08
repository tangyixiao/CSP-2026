// ok greedy algo.
// O(n log V)
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	// freopen("adn.in", "r", stdin); // Never gonna give you up
	int n, m;
	scanf("%d%d", &n, &m);
	vector<int> v;
	for(int i=1;i<=n;i++)
	{
		int x;
		scanf("%d", &x);
		v.push_back(x);
	}
	int ans = 0;
	for(int i=29;i>=0;i--)
	{
		vector<int> lhc;
		for(int x : v)
		{
			if(x&(1<<i)) lhc.push_back(x);
		}
		if(lhc.size() >= m)
		{
			v = lhc;
			ans |= (1 << i);
		}
	}
	printf("%d\n", ans);
	return 0;
}