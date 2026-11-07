#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5+10;
struct node{
	ll a,c;
} a[N];
ll n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	char ch;
	for(ll i = 1; i <= n; i++){
		cin >> a[i].a >> ch;
		a[i].c = ll(ch-'a')+1;
	}
	ll l = 1, r = n, ans = 0;
	while(l < r){
		if(a[l].a == a[r].a){
			if(a[l].c == a[r].c){
				l++; r--;
//				cout << "a1:" << l << " " << r << "\n";
				continue;
			}
			if(a[l].c != a[r].c){
				ans += a[l].a;
//				cout << "a2:" << l << " " << r << " " << a[l].a << '\n';
				l++; r--;
				continue;
			}
		}
		if(a[l].a < a[r].a){
			if(a[l].c == a[r].c){
//				cout << "b1:" << l << " " << r << "\n";
				a[r].a -= a[l].a;
				l++;
				continue;
			}
			if(a[l].c != a[r].c){
				ans += a[l].a;
//				cout << "b2:" << l << " " << r << " " << a[l].a << '\n';
				a[r].a -= a[l].a;
				l++;
				continue;
			}
		}
		if(a[l].a > a[r].a){
			if(a[l].c == a[r].c){
//				cout << "c1:" << l << " " << r << "\n";
				a[l].a -= a[r].a;
				r--;
				continue;
			}
			if(a[l].c != a[r].c){
				ans += a[r].a;
//				cout << "c2:" << l << " " << r << " " << a[r].a << '\n';
				a[l].a -= a[r].a;
				r--;
				continue;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
