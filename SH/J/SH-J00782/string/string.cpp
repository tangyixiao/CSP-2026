#include<bits/stdc++.h>
using namespace std;
long long n, a[200005], cnt, ans;
bool b[30];
char c[2000005];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	cnt = 1;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[cnt];
		for(int j = cnt + 1; j <= cnt + 1 + a[i]; j++){
			c[j] = c[cnt];
		}
		cnt += a[i];
		if(!b[c[cnt]]){
			b[c[cnt]] = 1;
		}
	}
	cnt--;
	for(int i = 1; i <= cnt / 2; i++){
		if(c[i] == c[cnt + 1 - i]){
			continue;
		}
		ans++;
	}
	cout << ans;
	return 0;
}
