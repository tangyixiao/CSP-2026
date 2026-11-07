#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200005],s[200005],b[27][200005],m,ans;
char c[200005];
//vector <int> v[27];
vector < pair <int,int> > v[27];
//int jian1(int l,int r,int ch){
////	int cnt = 0,cnt1 = 0,cnt2 = 0;
////	int L = 0,R = v[ch].size();
////	while (L <= R){
////		int mid = (L + R) / 2;
////		if (v[ch][mid].second < l){
////			L = mid + 1;
////		}else{
////			R = mid - 1;
////		}
////	}
////	cnt1 = L;
////	L = 0,R = v[ch].size();
////	while (L <= R){
////		int mid = (L + R) / 2;
////		if (v[ch][mid].first > r){
////			R = mid - 1;
////		}else{
////			L = mid + 1;
////		}
////	}
////	cnt2 = R;
//	if (c[l] - 'a' == ch){
//		l
//	}
//}
int ss[1000006],cc;
void solve1(){
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= a[i];j++){
			ss[++cc] = c[i] - 'a';
		}
	}
	for (int i = 1;i <= cc;i++){
		ans += (ss[i] != ss[m - i + 1]);
	}
	cout << ans / 2 << "\n";
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
		s[i] = s[i - 1] + a[i];
//		v[c[i] - 'a'].push_back(i);
		v[c[i] - 'a'].push_back({s[i - 1] + 1,a[i - 1] + a[i]});
	}
	m = s[n];
	if (m <= 1000000){
		solve1();
		return 0;
	}
	for (int i = 0;i < 26;i++){
		for (int j = 1;j <= n;j++){
			b[i][j] = b[i][j - 1] + (c[j] - 'a' == i) * a[j];
		}
	}
//	for (int i = 1;i <= n;i++){
//		cout << s[i] << " ";
//	}cout << "\n";
	
	for (int i = 1;i <= n;i++){
		int l = s[i - 1] + 1,r = s[i - 1] + a[i];
		int nr = m - l + 1,nl = m - r + 1;
		int t0 = lower_bound(s + 1,s + n + 1,nl) - s;
		int t1 = lower_bound(s + 1,s + n + 1,nr) - s;
//		cout << nl << " " << nr << " ";
//		cout << t0 << " " << t1 << "\n";
		if (c[t0] == c[i]){
			nl = s[t0] + 1;
			t0++;
		}
		if (c[t1] == c[i]){
			nr = s[t1 - 2] + a[t1 - 1];
			t1--;
		}
		ans += nr - nl + 1 - (b[c[i] - 'a'][t1] - b[c[i] - 'a'][t0 - 1]);
	}
	cout << ans / 2 << "\n";
	return 0;
}
/*
3
2 a
2 b
1 c

5
5 a
6 b
3 c
4 d
1 a
*/