#include<bits/stdc++.h>
#define LoveCyrene ios :: sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define LoveAnastasya freopen("and.in", "r", stdin)
#define LoveOdette freopen("and.out", "w", stdout)
#define int long long
using namespace std;;
constexpr int N = 5e5 + 9178;
int a[N], vis[N];

int calc(int n, int m, int mx){
	for (int i = 1; i <= n; ++i) vis[i] = 0;
	
	int res = a[mx];
	vis[mx] = 1;
	
	for (int i = 1; i < m; ++i){
		int cur = 0, curid = 0;
		for (int j = 1; j <= n; ++j){
			if(!vis[j] && (a[j] & res) > (cur & res)){
				cur = a[j];
				curid = j;
			}
		}
		vis[curid] = 1;
		res &= cur;
	}
	
	return res;
}

bool A(int n){
	bool ok = 1;
	for (int i = 1; i <= n; ++i){
		int LG = (int)log2(a[i]);
		if(a[i] != (1 << (LG + 1)) - 1){
//			cout << a[i] << " " << (1 << (LG + 1)) - 1 << '\n';
			return 0;
		}
	}
	return 1;
}

int tpa(int n, int m){
	sort(a + 1, a + n + 1, [&](int x, int y){ return x > y; });
	return a[m];
}

bool B(int n){
	for (int i = 1; i <= n; ++i) if(a[i] > 4) return 0;
	return 1; 
} 

int tpb(int n, int m){
	int c1 = 0, c2 = 0, c3 = 0;
	for (int i = 1; i <= n; ++i) c1 += a[i] == 1, c2 += a[i] == 2, c3 += a[i] == 3;
	if(c3 >= m) return 3;
	else if(c3 + c2 >= m) return 2;
	else if(c3 + c1 >= m) return 1;
	else return 0; 
}

int tpc(int n, int m){
	int res = a[1];
	for (int i = 1; i <= n; ++i) res &= a[i];
	return res; 
}

int Anastasya(int n, int m){
	if(A(n)) return tpa(n, m);
	if(B(n)) return tpb(n, m);
	if(n == m) return tpc(n, m);
	
	vector<int> choose;
	
	int mx = 0;
	for (int i = 1; i <= n; ++i){
		mx = max(mx, 1ll * __builtin_popcountll(a[i]));
	}
	
	for (int i = 1; i <= n; ++i){
		if(__builtin_popcountll(a[i]) == mx) choose.push_back(i);
	}
	
	int res = 0;
	for (int x : choose) res = max(res, calc(n, m, x));

	return res;
}


signed main(){
	LoveAnastasya;
	LoveOdette;
	LoveCyrene;
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; ++i) cin >> a[i]; 
	cout << Anastasya(n, m);
	return 0;
}
/*
4 2
3 15 12 12

12

5 3
31 1 15 3 7

7
*/