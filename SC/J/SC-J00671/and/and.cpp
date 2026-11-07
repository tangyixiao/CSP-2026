# include <bits/stdc++.h>
# define int long long
# define endl "\n"
using namespace std;

const int N = 2e5 + 10;
//const int INF = (1 << 31) - 1;

int n, m;
int a[N];

int dfs(int f, int st, int k){
	// 在 f ~ n 中选择 
	if(k >= m) return st;
	if(f > n) return 0;  // 未达到 m 
	
	int maxx = 0;
	for(int i=f;i<=n;i++){
		maxx = max(
			maxx,
			dfs(i+1, st & a[i], k + 1)
		);
	}
	
	return maxx;
}

void solve_n20(){
	int ans = 0;

	for(int i=1;i<=n;i++){
		ans = max(
			ans,
			dfs(i+1, a[i], 1)
		);
	}
	
	cout << ans << endl;

	return ;
}

void solve_m1(){
	int ans = 0;
	
	for(int i=1;i<=n;i++){
		ans = max(ans, a[i]);
	}
	
	cout << ans << endl;
	
	return ;
}

//void solve_m2(){
//	
//	return ;
//}

void solve_mn(){
	int ans = a[1];

	for(int i=2;i<=m;i++){
		ans &= a[i];
	}

	cout << ans << endl;

	return ;
}

//void solve_A(){
//
//	return ;
//}

void solve_bad(){
	const auto cmp = [](int x, int y){
		return x > y;
	};
	
	sort(a+1, a+n+1, cmp);
	
	int ans = a[1];
	for(int i=2;i<=m;i++){
		ans &= a[i];
	}
	
	cout << ans << endl;
	
	return ;
}

void solve_B(){
	solve_bad();
	return ;
}

signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	bool fB = true;

	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if(a[i] != i-1) fB = false;
	}

	if(m == 1){
		solve_m1();
	}
//	else if(m == 2){
//		solve_m2();
//	}
	else if(m == n){
		solve_mn();
	} else if(fB){
		solve_B();
	} else if(n * m <= 4000){
		solve_n20();
	} else {
		solve_bad();
	}

	return 0;
}

