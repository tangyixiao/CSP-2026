#include <bits/stdc++.h>
using namespace std;
long long n,a,ans;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 0;i < n;i ++){
		int m;
		char y;
		cin >> m >> y;
		for(int i = 1;i <= m;i ++){
			s += y;
		}
	}
	a = s.size() - 1;
	for(int i = 0;i < a;i ++){
		if (s[i] != s[a-i]){
			s[a-i] = s[i];
			ans ++;
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
