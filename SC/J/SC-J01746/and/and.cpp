#include<bits/stdc++.h>
#define int long long
#define ios ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

const int N = 2e5 + 5;

bool vis[N];
int n, m, ans, cnt;
int a[N], cn[N], b[N];
int qp[35];
string s[N];

void init(){
	qp[1] = 1;
	for(int i = 2;i <= 31;i ++){
		qp[i] = qp[i - 1] * 2;
	}
	
	for(int i = 1;i <= n;i ++){
		for(int j = 31;j >= 1;j --){
			if(a[i] - qp[j] >= 0){
				s[i] += '1';
				a[i] -= qp[j];
				cn[j] ++;
			}else{
				s[i] += '0';
			}
		}
	}
}

signed main(){
	ios;
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++){
		cin >> a[i];
		b[i] = a[i];
	}
	
	init();
	
//	for(int i = 1;i <= n;i ++){
//		cout << s[i] << "\n";
//	}
//	for(int i = 31;i >= 1;i --){
//		cout << cn[i] << ' ';
//	}
//	cout << "\n";
	for(int i = 1;i <= 31;i ++){
		if(cn[31 - i + 1] < m) continue;
		for(int j = 1;j <= n;j ++){
//			if(i == 31 - 9) cout << "\n\n\n\n\n\n\n\n\n\n\n";
			if(s[j][i] == '0' && vis[j] != 1){
				vis[j] = 1;
				++ cnt;
				if(cnt + m == n){
//					cout << "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq";
					break;
				} 
			}
		}
//		for(int i = 1;i <= n;i ++){
//			cout << vis[i] << ' ';
//		}
//		cout << "\n";
	}
//	for(int i = 1;i <= n;i ++){
//		cout << vis[i] << ' ';
//	}
	
	bool f = 0;
	for(int i = 1;i <= n;i ++){
		if(vis[i] == 0){
			if(f == 0) ans = b[i];
			else ans &= b[i];
//			cout << b[i] << ' ' << vis[i] << "\n";
		}
	}
	cout << ans;
	
	
//	sort(b + 1, b + 1 + n);
//	for(int i = n;i >= n - 10;i --){
//		cout << b[i] << ' ';
//	}
	return 0;
}