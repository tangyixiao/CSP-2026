#include <bits/stdc++.h>
using namespace std;

long long a[200005];
char c[200005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);	
	freopen("string.out","w",stdout);
	int n;
	long long sum = 0,ans = 0;
	string s;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i] >> c[i];
		sum += a[i];
	}
	if(sum / 2 > 1000000000) cout << sum / 2;
	else{
		for(int i = 0;i < n;i++){
			for(int j = 0;j < a[i];j++) s += c[i];
		}
		for(int i = 0;i < s.length() / 2;i++){
			if(s[i] != s[s.length()-i-1]) ans++;
		}
		cout << ans;
	}
	return 0;
}
