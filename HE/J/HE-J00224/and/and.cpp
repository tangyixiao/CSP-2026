#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+50;
int n,m;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	ll a;cin >> a;
	ll ans=a;
	for(int i=2;i<=n;i++){
		cin >> a;
		ans=ans&a;
	}
	cout << ans;
	return 0;
}
