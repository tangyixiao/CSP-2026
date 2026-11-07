#include <fstream>

using namespace std;
typedef long long ll;

ifstream fin("card.in");
ofstream fout("card.out");
#define cin fin
#define cout fout

const ll N = 5e5+10;
const ll N2 = 3e5+10;
ll a[N];
ll table[N2],tsize;
ll count[N2];

int main() {
	ll n,m; cin>>n>>m;
	for (ll i=1; i<=n; ++i) {
		cin>>a[i];
	}
	for (ll i=1; i<=n; ++i) { // 局 
		for (ll j=i; j<=n; ++j) {
			for (ll k=0; k<tsize; ++k) {
				if (a[j]==table[k]) { // 桌上有这张牌 
					tsize = k;
					break;
				}
			}
			table[tsize++] = a[j];
		}
		for (ll k=0; k<tsize; ++k) {
			count[table[k]]++;
		}
		tsize=0;
	}
	for (ll c=1; c<=m; ++c) {
		cout<<count[c]<<' ';
	}
	cout<<'\n';
	return 0;
}






