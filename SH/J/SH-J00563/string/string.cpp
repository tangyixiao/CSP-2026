#include <bits/stdc++.h>
using namespace std;
long long n , ls , L , rs , ans;
vector <pair<int , char>> s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin >> n;
	if (n == 1){
		cout << 0;
		return 0;
	}
	for (int i = 1;i <= n ;i ++){
		int t;
		char c;
		cin >> t >> c;
		L += t;
		s.push_back({t,c});
	}
	int l = 0;
	int r = n - 1;
	ls += s[l].first;
	rs += s[r].first;
//	cout << ls << " " << rs << endl;
//	cout << L << endl; 
	while (l < r){	
		if (s[l].second != s[r].second){
			ans += min(ls,rs) - max(ls - s[l].first,rs - s[r].first);
//			cout << l << " " << r << endl;
		}
		if (ls < rs){
			l ++;
			ls += s[l].first;
		}else {
			r --;
			rs += s[r].first;
		}
	}
	cout << ans;
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
