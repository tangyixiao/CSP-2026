#include <bits/stdc++.h>
using namespace std;
int a[200005];
string s;
int cnt = 0;
int ans = 0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n; cin >> n;
	while(n--){
		int x;
		char c;
		cin >> x >> c;
		for(int i = 1; i <= x; i++)s += c;
		cnt += x;
	}
	for(int i = 0; i < s.size() / 2; i++){
		if(s[i] != s[s.size() - i - 1])ans++;
	}
	cout << ans << endl;
}
