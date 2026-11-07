#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[500005], ch[500005], ans[500005];
vector<int> hashe[500005];
ll s[500005];
ll now = 0;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		hashe[a[i]].push_back(i);
		s[a[i]] ++;
		ch[i] = 1;
	}
	for (int i = m; i >= 1; i --)
	{
		for (int j = s[i] - 1; j >= 1; j --)
		{
			ch[hashe[i][j]] += hashe[i][j] - hashe[i][j - 1] - 1;
			ch[hashe[i][j - 1]] -= hashe[i][j] - hashe[i][j - 1] - 1;
		}
	}
	for (int i = 1; i <= n; i ++)
	{
		now += ch[i];
		ans[a[i]] = max(ans[a[i]], now);
	}
	for (int i = 1; i <= m; i ++)
	    cout << ans[i] << " ";
	cout << '\n';
    return 0;
}
