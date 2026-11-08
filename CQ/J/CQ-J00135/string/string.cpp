#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
long long n, ans, minn, a[N], d, f, tot;
char s[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1; i <= n; i ++){
		cin >> a[i] >> s[i];
	}
	tot = n + 1;
	for(int i = 0; i < tot - 1;){
		if(d == 0) d += a[++ i];
		if(f == 0) f += a[-- tot];
		if(s[i] == s[tot]){
			minn = min(d, f);
			d -= minn;
			f -= minn;
		}
		else{
			minn = min(d, f);
			d -= minn;
			f -= minn;
			ans += minn;
		}
	}
	cout << ans;
} 
