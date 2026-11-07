//#define NDEBUG
#include<bits/stdc++.h>
#ifdef NDEBUG
#define print(...) void()
#else
#define print(...) void(fprintf(stderr, __VA_ARGS__))
#endif
#define up(i,l,r) for (int i=l; i<=r; ++i)
#define dn(i,r,l) for (int i=r; i>=l; --i)
using namespace std; using ll = long long;
const int N = 5e5+5;
int n, m;
int A[N];
int answer[N];
int X[N], to[N], add[N];
int cnt[N];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	up (i, 1, n) cin >> A[i];
	dn (i, n, 1){
		if (X[A[i]]) to[i]=X[A[i]];
		else X[A[i]]=i, to[i]=i+1, add[i]=A[i];
	}
	up (i, 1, n) ++cnt[i];
	up (i, 1, n)
		cnt[to[i]]+=cnt[i],
		answer[add[i]]+=cnt[i];
	up (i, 1, m) cout << answer[i] << " ";
	return 0;
}