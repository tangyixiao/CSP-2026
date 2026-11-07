#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	freopen("string.in", "r", stdin);
	freopen("string.out","w", stdout);
	
	int n;
	cin >> n;
	
	deque<pair<ll, char>>q;
	for(int i=0;i<n;i++){
		ll a;
		char c;
		cin >> a >> c;
		q.push_back({a, c});
	}
	ull ans = 0;
	while(q.size()>1){
		auto x = q.front(), y = q.back();
		q.pop_front(), q.pop_back();
		if(x.second!=y.second)
			ans += min(x.first, y.first);
		
		if(x<y)q.push_back({y.first-x.first, y.second});
		if(x>y)q.push_front({x.first-y.first, x.second});
	}
	cout << ans << '\n';
	
	return 0;
}