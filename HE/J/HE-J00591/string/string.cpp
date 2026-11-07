#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
ll ans;
pair<ll,char> cur;
vector<pair<ll,char>> ns;
pair<ll,char> s[200050];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s[i].first >> s[i].second;
	}
	cur = {s[0].first,s[0].second};
	for(int i = 1;i < n;i++){
		if(s[i].second == s[i - 1].second){
			cur.first += s[i].first;
			cur.second = s[i].second;
		}else{
			ns.push_back(cur);
			cur = {s[i].first,s[i].second};
		}
	}
	ns.push_back(cur);
	int l = 0,r = ns.size() - 1;
	while(l <= r){
		ll target = ns[l].first < ns[r].first ? l : r;
		if(ns[l].second != ns[r].second) ans += ns[target].first;
		ns[l].first -= ns[target].first;
		if(ns[l].first == 0) l++;
		ns[r].first -= ns[target].first;
		if(ns[r].first == 0) r--;
	}
	cout << ans;
	return 0;
}
