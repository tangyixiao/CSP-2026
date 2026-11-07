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
const int N = 2e5+5;
int n, m;
int A[N];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	up (i, 1, n) cin >> A[i];
	int ans=0;
	dn (i, 29, 0){
		int t=0;
		up (j, 1, n) if ((A[j]&ans)==ans&&(A[j]>>i&1)) ++t;
		if (t>=m) ans|=1<<i;
	}
	cout << ans;
	return 0;
}