#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	vector<pair<long long, char>> a(n+1);
	for(int i=1;i<=n;++i){
		cin >> a[i].first >> a[i].second;
	}
	int l=1, r=n;
	long long ans=0;
	while(l!=r){
		long long min_len=min(a[l].first, a[r].first);
		if(a[l].second!=a[r].second){
			ans+=min_len;
		}
		if(a[l].first==min_len) ++l, a[r].first-=min_len;
		else --r, a[l].first-=min_len;
	}
	cout << ans << endl;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/