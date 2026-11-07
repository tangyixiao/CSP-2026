#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#ifdef LOCAL
#define debug(x) x
#else
#define debug(x)
#endif

void FileIO(const char * inf, const char * ouf) {
	freopen(inf, "r", stdin);
	freopen(ouf, "w", stdout);
}

constexpr int MAXN = 200010;

int n;
ll c[MAXN];
char cc[MAXN];
ll a[MAXN], b[MAXN];
char aa[MAXN], bb[MAXN];

int main() {
	ios_base::sync_with_stdio(false);
	FileIO("string.in", "string.out");
	cin>>n;
	ll S = 0;
	for (int i=1;i<=n;i++) {
		cin>>c[i]>>cc[i];
		S += c[i];
	}
	ll la = 1, ra = S / 2, lb = (S + 1) / 2 + 1, rb = S; 
	S /= 2;
	debug(assert(ra - la + 1 == S));
	debug(assert(rb - lb + 1 == S));
	ll ns = 0;
	int acnt = 0, bcnt = 0;
	for (int i=1;i<=n;i++) {
		if (ns >= S) break;
		if (!c[i]) continue;
		aa[++acnt] = cc[i];
		a[acnt] = min(c[i], S-ns);
		ns += min(c[i], S-ns); 
		c[i] -= min(c[i], S-ns);
	}
	ns = 0;
	for (int i=n;i>=1;i--) {
		if (ns >= S) break;
		if (!c[i]) continue;
		bb[++bcnt] = cc[i];
		b[bcnt] = min(c[i], S-ns);
		ns += min(c[i], S-ns);
		c[i] -= min(c[i], S-ns);
	}
	
//	for (int i=1;i<=acnt;i++) {
//		cout<<a[i]<<" "<<aa[i]<<endl;
//	}
//	cout<<endl;
//	for (int i=1;i<=bcnt;i++) {
//		cout<<b[i]<<" "<<bb[i]<<endl;
//	}
//	cout<<endl;

	ll ip = 0, jp = 0;
	ll ans = 0;
	for (int i=1,j=1;i<=acnt;i++) {
		ip += a[i];
		if (jp < ip && j > bcnt) debug(assert(false));
		while (j <= bcnt && jp < ip && jp + b[j] <= ip) {
			jp += b[j];
			if (aa[i] != bb[j]) ans += b[j];
			b[j] = 0;
			j++; 
		}
		if (jp < ip) {
			// jp + b[j] > ip
			ll dif = (ip - jp);
			jp = ip;
			if (aa[i] != bb[j]) ans += dif;
			b[j] -= dif;
		}
		assert(jp == ip);
	}
	cout<<ans<<endl;
}
