#define NDEBUG
#include<bits/stdc++.h>
#ifdef NDEBUG
#define print(...) void()
#else
#define print(...) void(fprintf(stderr, __VA_ARGS__))
#endif
#define up(i,l,r) for (int i=l; i<=r; ++i)
#define dn(i,r,l) for (int i=r; i>=k; --i)
using namespace std; using ll = long long;
const int N = 2e5+5;
int n; ll L;
int A[N]; char c[N];
map<ll, char> odt;
void split(ll x){
//	print("split %lld\n", x);
	auto it=odt.upper_bound(x);
	--it;
	print("%lld: %c\n", x, it->second);
	odt[x]=it->second;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	up (i, 1, n) cin >> A[i] >> c[i], L+=A[i];
	ll Lst=1; 
	up (i, 1, n) 
		odt[Lst]=c[i], Lst+=A[i];
	ll ans=0;
	Lst=0;
	up (i, 1, n){
		ll last=L-Lst+1;
		ll first=L-(Lst+A[i])+1;
		split(last), split(first);
		for (auto it=odt.lower_bound(first); it->first<last; ++it) if (it->second!=c[i])
			ans+=next(it)->first-it->first,
			print("%d: %lld\n", i, next(it)->first-it->first);
		Lst+=A[i];
	}
	cout << ans/2;
	return 0;
}