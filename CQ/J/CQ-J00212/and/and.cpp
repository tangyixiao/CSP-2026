#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5 + 86;
ll n,m,a[N],ans;
string s[N];
vector<ll> v[32];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
		ll x = a[i];
		string s2 = "";
		while(x){
			s[i] += x % 2 + '0';
			x /= 2;
		}
	}
	sort(a + 1,a + n + 1);
	for(int i = 1;i <= n;i++){
		for(int j = 0;j < s[i].size();j++){
			if(s[i][j])v[j].push_back(a[i]);
		}
	}
	for(int i = 30;i >= 0;i--){
		if(v[i].size() >= m){
			ans = v[i][v[i].size() - 1];
			for(int j = 2;j <= m;j++){
				ans &= v[i][v[i].size() - j];
			}
		}
	}
	cout<<ans;
	return 0;
}
