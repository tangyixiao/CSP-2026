#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, sz;
//O(n)
pair<ll,char> s[200009];
ll sh, lt, rt, lp, rp, ans; //rp++ (not rly)
int main ()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//saved
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].first >> s[i].second;
		sz += s[i].first;
	}
	sh = 0, lt = s[0].first, lp = 0, rt = s[n-1].first, rp = n-1;
	while (lt == 0) lt = s[++lp].first;
	while (rt == 0) rt = s[--rp].first;
	while (true)
	{
		ll m = min(min(lt,rt),sz/2-sh); //let me confirm that
		//calc the diff in [sh,sh+m-1]
		if (s[lp].second != s[rp].second)
		{
			ans += m;
		}
		//then move
		sh += m;
		lt -= m;
		rt -= m;
		while (lt == 0) lt = s[++lp].first;
		while (rt == 0) rt = s[--rp].first;
		if (sh >= sz/2) break;
	}
	cout << ans << endl;
	return 0;
}
