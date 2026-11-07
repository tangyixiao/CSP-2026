#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int M = 2e5+3;
ll n,m;
vector <ll> a;
int dp[M];

string sw(ll x){
	string s = "";
	while (x != 0){
		s += x%2+'0';
		x /= 2;
	}
	//reverse(s.begin(),s.end());
	return s;
}

vector <ll> pw;
void ksm(){
	pw.push_back(1);
	for (int i = 1;i <= 30;i ++)
		pw.push_back(pw[i-1]*2);
}

int ws(string x){
	reverse(x.begin(),x.end());
	ll l = x.size();
	ll d = 0;
	for (ll i = 0,j = l-i-1;i < l;i ++,j --){
		if (x[i] == '0')   continue;
		else  d += pw[j];
	}
	return d;
}



string solve(string s1,string s2){
	string c;
	for (ll i = 0;i < max(s1.size(),s2.size());i ++){
		if (s1[i] == s2[i] && s1[i] == '1')   c += '1';
		else c += '0';
	}
	return c;
}

int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(0),cin.tie(0);
	ksm();
	
	cin >> n >> m;
	
	a.resize(n+1);
	for (ll i = 0;i < n;i ++)   cin >> a[i];
	
	dp[0] = a[0];
	for (int i = 1;i <= m;i ++)   dp[i] = M;
	for (int i = 1;i <= m;i ++){
		int x = dp[i-1];
		for (int j = 1;j <= n;j ++){
			if (j == i)   continue;
			string s1 = sw(x),s2 = sw(a[j]);
			string kk = solve(s1,s2);
			dp[i] = max(dp[i],ws(kk));
		}
	}
	
	cout << dp[m];
	
	return 0;
}