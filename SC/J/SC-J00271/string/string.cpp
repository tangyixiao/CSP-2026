#include <bits/stdc++.h>

using namespace std;
constexpr int MaxN = 2e5+5;
int n, ans, count_all;
pair<int, char> a[MaxN];
vector<pair<int, char>> crop(int from, int to){
	vector<pair<int, char>> B;
	int start = 0;
	for(int i=n-1;i>=0;i--){
		if (start<=to&&start+a[i].first>=from){
			B.push_back({min(to, start+a[i].first)-max(start, from), a[i].second});//maybe +1
		}
		start+=a[i].first;
		if (start>to) break;
	}
	return B;
}
int main() {
	ios::sync_with_stdio(false);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int _i;
		char _j;
		cin >> _i >> _j;
		a[i] = {_i, _j};
		count_all+=_i;
	}
	int ans=0,start=0;
	for(int i=0;i<n;i++){
		if(start>count_all/2){
			break;
		}
		auto res = crop(start, min(start+a[i].first,count_all/2));
		for (pair<int, char> j : res){
			if (j.second!=a[i].second) ans+=j.first;
		}
		start+=a[i].first;
	}
	cout<<ans<<endl;



	return 0;
}