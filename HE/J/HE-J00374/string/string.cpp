#include <fstream>

using namespace std;
typedef long long ll;

ifstream fin("string.in");
ofstream fout("string.out");
#define cin fin
#define cout fout

const ll N=2e5+10;
pair<ll,char> a[N];

int main() {
	ll n; cin>>n;
	for (ll i=1; i<=n; ++i) {
		cin>>a[i].first>>a[i].second;
	}
	ll l=1,r=n;
	ll ans=0;
	while (l<r) {
		if (a[l].first > a[r].first) {
			ll count = a[l].first-a[r].first;
			if (a[l].second != a[r].second) ans+=a[r].first;
			a[l].first = count;
			r--;
		} else if (a[l].first == a[r].first) {
			if (a[l].second != a[r].second) ans+=a[l].first;
			l++; r--;
		} else {
			ll count = a[r].first-a[l].first;
			if (a[l].second != a[r].second) ans+=a[l].first;
			a[r].first = count;
			l++;
		}
	}
	cout<<ans<<'\n';
	return 0;
}




