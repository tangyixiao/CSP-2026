#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
int n;
struct ss{
	ll a;
	char c;
}s[200005];
ll ans;
void solve(){
	cin >> n;
	for(int i = 1 ; i <= n ; i ++){
		cin >> s[i].a >> s[i].c;
	}
	int l = 1 , r = n;
	while(l <= r){
		if(s[l].c!=s[r].c){
			ans += min(s[l].a , s[r].a);
		}
		if(s[l].a == s[r].a){
			l++;
			r--;
		}
		else if(s[l].a > s[r].a){
			s[l].a -= s[r].a;
			r--;
		}	
		else if(s[l].a < s[r].a){
			s[r].a -= s[l].a;
			l++;
		}
	} 
	cout << ans;
	return;
}
int main(){
	freopen("string6.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
} 
