#include<bits/stdc++.h>
#define fre(x) freopen(x".in","r",stdin);freopen(x".out","w",stdout)
using namespace std;
int main()
{
	fre("string");
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<pair<long long,char>> v(n+1);
	for(int i = 1;i <= n;i++)
	{
		long long x;
		char c;
		cin >> x >> c;
		v[i] = {x,c};
	}
	long long cnt = 0;
	int l,r;
	l = 1;r = n;
	long long suml = v[l].first,sumr = v[r].first;
	long long t;
	while(l < r)
	{
		t = min(suml,sumr);
		if(v[l].second != v[r].second)
		{
			cnt += t;
		}
		suml -= t;
		sumr -= t;
		if(suml == 0)
		{
			l++;
			suml = v[l].first;
		}
		if(sumr == 0)
		{
			r--;
			sumr = v[r].first;
		}
	}
	cout << cnt;
	return 0;
}