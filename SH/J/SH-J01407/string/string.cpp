#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n;
ll a[200009];
char c[200009];

stack <pair<ll, char> > s;

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for(int i = 1; i <= n; i ++){
		cin >> a[i] >> c[i];
		s.push({a[i], c[i]});
	}
	ll ans = 0;
	
	// O(n).
	for(int i = 1; i <= n; i ++){
		ll l_top = a[i];
		ll l_back = s.top().first;
		char c_top = c[i];
		char c_back = s.top().second;
		//cout << l_top << " " << c_top << endl;
		//cout << l_back << " " << c_back << endl;
		ll temp = l_back;
		while(l_top >= l_back && l_top && !s.empty()){
			l_back = s.top().first;
			c_back = s.top().second;
			if(c_top != c_back) ans += l_back;
			l_top -= l_back;
			s.pop();
			if(!s.empty() && l_top){
				l_back = s.top().first;
				c_back = s.top().second;
			}
			else l_back = 0;
		}
		if(l_top < l_back){
			if(!s.empty()){
				l_back = s.top().first;
				c_back = s.top().second;
			}
			if(c_top != c_back) ans += l_top;
			s.pop();
			if(l_top >= 0 && l_back - l_top >= 0) s.push({l_back - l_top, c_back});
			//cout << "Pushed " << l_back - l_top << " " << c_back << endl;
		}
	}
	
	cout << ans / 2;

	return 0;
}
