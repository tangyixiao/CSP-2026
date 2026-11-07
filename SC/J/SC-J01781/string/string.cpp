#include<bits/stdc++.h>
#define LoveCyrene ios :: sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define LoveAnastasya freopen("string.in", "r", stdin)
#define LoveOdette freopen("string.out", "w", stdout)
#define int long long int
using namespace std;;
constexpr int N = 2e5 + 9178;

struct P{ int x; char c; } a[N], b[N];

int aa[N], bb[N];

int lnt(char x){ return x - 'a' + 1; }

//int findmid(int n, int s){
//	int cur = 0;
//	for (int i = 1; i <= n; ++i){
//		cur += a[i].x;
//		if(s & 1){
//			if(cur > s / 2){
//				return i;
//			}			
//		}
//		else{
//			if(cur >= s / 2){
//				return i;
//			}			
//		}
//	}
//}

//int Anastasya(int n){
//	int s = 0;
//	for (int i = 1; i <= n; ++i) s += a[i].x;
//	for (int i = 1; i <= n; ++i) aa[i] = aa[i - 1] + a[i].x;
//	
//	int res1 = 0, res2 = 0;
//	
//	int id = findmid(n, s);
//	
//	cout << "mid : " << id << '\n';
//	
//	int be = 0, af = 0;
//	int i = 1, j = n;
//	for (; i <= j; ++i){
//		be += a[i].x;
//		for (; j >= i; ){
//			if(af + a[j].x >= be) break;
//			if(a[j].c != a[i].c){
//				res1 += a[j].x;
//				cout << "cur res : " << res1 << '\n';
//			}
//			af += a[j].x, --j;
//			cout << "af : " << af << '\n';
//		}
//	}
//	if(i != j){
//		
//	}
//	
//	return res1;
//}

int Anastasya(int n){
	string s;
	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= a[i].x; ++j) s += a[i].c;
	}
	int m = s.size();
	int res1 = 0, res2 = 0;
	for (int i = 0, j = s.size() - 1; i <= j; ++i, --j){
		if(s[i] != s[j]) res1++;
	}
	return res1;
}

signed main(){
	LoveAnastasya;
	LoveOdette;
	LoveCyrene;
	int n; cin >> n;
	for (int i = 1; i <= n; ++i) cin >> a[i].x >> a[i].c;
	cout << Anastasya(n);
	return 0;
}
/*
3
2 a
2 b
1 c

2

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

6
100 a
100 a
100 a
100 b
100 b
100 b
*/