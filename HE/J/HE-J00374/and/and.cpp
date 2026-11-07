#include <fstream>

using namespace std;
typedef long long ll;

ifstream fin("and.in");
ofstream fout("and.out");
#define cin fin
#define cout fout

const ll N=2e5+10;
ll a[N];
bool sel[N];

int main() {
	ll n,m; cin>>n>>m;
	for (ll i=1; i<=n; ++i) {
		cin>>a[i];
	}
	int max_ans=0;
	// 时间不够了, 直接写暴力吧。。 
	for (ll i=1; i<=n; ++i) {
		int ans=a[i];
		sel[i] = true;
		for (ll c=2; c<=m; ++c) {
			int in_max_ans=-1;
			ll max_sel;
			for (ll j=1; j<=n; ++j) {
				if (sel[j]) continue;
				if ((ans&a[j])>in_max_ans) {
					in_max_ans = ans&a[j];
					max_sel = j; 
				}
			}
			ans=in_max_ans;
			sel[max_sel] = true;
		}
		if (ans>max_ans) max_ans=ans;
		for (ll j=1; j<=n; ++j) sel[j]=false;
	}
	cout<<max_ans<<'\n';
	return 0;
}



