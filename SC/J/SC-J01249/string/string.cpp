#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<pair<int,char>> b(n);
	int tot = 0;
	for(int i = 0; i <n; i++) {
		cin>>b[i].first>>b[i].second;
		tot += b[i].first;
	}
//	vector<pair<int,char>> b(n);
//	char prev = ' ';
//	int pt = 0;
//	for(int i = 0; i <n; i++) {
//		if(a[i].second == prev) {
//			b.push_back({pt,prev});
//			prev= a[i].second;
//			pt = a[i].first;
//		}
//		else{
//			pt += a[i].first;
//		}
//	}
//	if(pt != 0) {
//
//		b.push_back({pt,prev});
//	}
//	vector<int> c,d;
	int acc = 0;
	int i = 0;
	int j = n-1;
	int ans = 0;
	while(acc < n/2){
		if(i >= j){
			break;
		}
		int cur = min(b[i].first,b[j].first);
		b[i].first -= cur;
		b[j].first -= cur;
//		cout<<cur<<endl;
		if(b[i].second != b[j].second){
			ans += cur;
		}
		if(b[i].first == 0){
			i++;
		}
		if(b[j].first == 0){
			j--;
		}
	}
	cout<<ans;
}