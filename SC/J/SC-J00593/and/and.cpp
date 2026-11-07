#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;

int s[N];

bool cmp(int x, int y){
	return x > y;
}

void solve()
{
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> s[i];
	} 
	sort(s + 1, s + 1 + n, cmp);
	int ans = 0;
	for(int i = 1; i <= m; i++)
	{
		if(ans == 0){
			ans = s[i];
		}
		ans = ans & s[i]; 
		if(ans == 0){
			ans = s[i];
			m++;
		}
	}
	cout << ans;
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	solve();
	fclose(stdin);
	fclose(stdout);
	return 0;
}