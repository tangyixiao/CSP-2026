#include <iostream>

using namespace std;
using ll = long long;
pair<int,char> a[200005];
long long ans;
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1;i <= n;++i) cin >> a[i].first >> a[i].second;
	for (int i = 1,j = n,ci = 0,cj = 0;i < j;){
		if (a[i].first - ci <= a[j].first - cj){
			cj += a[i].first - ci;
			if (a[i].second != a[j].second) ans += a[i].first - ci;
			++i;
			ci = 0;
		} else {
			ci += a[j].first - cj;
			if (a[i].second != a[j].second) ans += a[j].first - cj;
			--j;
			cj = 0;
		}
	}
	cout << ans;
	return 0;
}