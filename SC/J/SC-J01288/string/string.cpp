#include <bits/stdc++.h>
using namespace std;

const int maxL = 2*1e5+10;
string s, tmp;
int n, a;
char c;
int dp[maxL];

bool check(string x){
	int len = x.length();
	for(int i = 0; i < len; ++i)
		if(x[i] != x[len-1-i]) return false;
	return true;
}

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> a >> c;
		for(int j = 0; j < a; ++j)
			s += c;
	}
	dp[1] = dp[0] = 0;
	for(int i = 2; i < s.length(); ++i){
		tmp = s.substr(0, i);
		if(check(tmp)) dp[i] = 0;
		else
			dp[i] = dp[i-1] + (i-1)/2;
	}
	cout << dp[s.length()-1];
	return 0;
}
