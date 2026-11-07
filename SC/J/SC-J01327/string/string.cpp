#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
int a[N];
char c[N];

signed main(){
	std::ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s;
	s += " ";
	int tot = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
		tot += a[i]; 
		while(a[i]--) s += c[i]; 
	}
	int mid = tot / 2;
//	int ans = 0, j = n;
//	for(int i = 1; i <= n && i < j; i++){
//		j = n - i + 1;
//		if(c[i] != c[j]){
//			ans += min(a[i], a[j]);
////			cout << "del1: " << ans << "\n";
//		}
//		int last = abs(a[i] - a[j]);
//		if(a[i] > a[j]){
//			if(c[i] != c[j - 1]){
//				ans += last;
////				cout << "del2: "<< ans << "\n";
//			}
//		}
//		if(a[i] < a[j]){
//			if(c[i + 1] != c[j]){
//				ans += last;
////				cout << "del3: " << ans << "\n";
//			}
//		}
//	}
	int ans = 0;
	for(int i = 1; i <= mid; i++){
		int j = tot - i + 1;
		if(s[i] != s[j]) ans++; 
	}
	cout << ans;
	return 0;
}