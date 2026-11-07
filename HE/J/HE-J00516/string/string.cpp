#include <bits/stdc++.h>
using namespace std;
int n;
long long ans;
struct str{
	int len;//len表示长度 
	char c;//c表示字符 
}a[100005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i].len >> a[i].c;
	int l = 1, r = n;
	while (l < r){
		while (l < r && a[l].len > a[r].len){
			if (a[l].c != a[r].c) ans += a[r].len;
			a[l].len -= a[r].len;
			a[r].len = 0;
			r--;
		}
		if (l < r && a[l].len == a[r].len){
			if (a[l].c != a[r].c) ans += a[l].len;
			a[l].len = a[r].len = 0;
			l++, r--;
		}
		else if (l < r && a[l].len < a[r].len){
			if (a[l].c != a[r].c) ans += a[l].len;
			a[r].len -= a[l].len;
			a[l].len = 0;
			l++; 
		}
	}
	cout << ans;
	return 0; 
} 
