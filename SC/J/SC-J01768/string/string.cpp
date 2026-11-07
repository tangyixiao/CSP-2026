#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 5;
ll a[N],b[N];
char ch[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n,sum = 0,ans = 0;
	string s = " ";
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> ch[i];
		if(a[i] < 1e4  && n < 1e4)for(ll j = 1;j <= a[i];j++){
			s = s + ch[i];
		}
		sum += a[i];
	}
	if(sum > 1e5){
		cout << sum / 2;
		return 0;
	}
	int p = sum / 2 + 1;
	if(sum % 2) p++;
	while(p <= sum){
		if(s[p] != s[sum - p + 1]){
			ans++;
//			cout << s[p] << " " << s[sum - p] << "\n";
		}
//		cout << p;
		p++;
	}
	cout << ans;
	return 0;
}
//	freopen("strinp.in","r",stdin);
//	freopen("strinp.out","w",stdout);