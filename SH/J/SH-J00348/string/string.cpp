#include<bits/stdc++.h>
using namespace std;
#define int long long
struct node{
	int l, r;
	char c;
}m[200000 + 50];
signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int tot = 0;
	m[0].r = 0;
	for(int i = 1; i <= n; i++){
		int a;
		cin >> a >> m[i].c;
		m[i].l = m[i - 1].r + 1;
		m[i].r = m[i].l + a - 1;
		tot += a;
	}
	int l2 = 1, r2 = n, ans = 0, num1 = 0, num2 = tot;
	while(true){
		if(m[l2].c != m[r2].c){
			if(m[l2].r > tot - m[r2].l + 1){
				ans += num2 - m[r2].l + 1;
				num2 = m[r2].l - 1;
				num1 = tot - num2;
				r2--;
			}
			else if(m[l2].r == tot - m[r2].l + 1){
				ans += num2 - m[r2].l + 1;
				num2 = m[r2].l - 1;
				num1 = m[l2].r;
				r2--;
				l2++;
				//cout << ans << " "; 
			}
			else{
				ans += m[l2].r - num1;
				num1 = m[l2].r;
				num2 = tot - num1;
				l2++;
			}
		}
		else{
			if(m[l2].r > tot - m[r2].l + 1){
				num2 = m[r2].l - 1;
				num1 = tot - num2;
				r2--;
			}
			else if(m[l2].r == tot - m[r2].l + 1){
				num2 = m[r2].l - 1;
				num1 = m[l2].r;
				r2--;
				l2++;
				//cout << ans << " "; 
			}
			else{
				num1 = m[l2].r;
				num2 = tot - num1;
				l2++;
			}
		}
		if(l2 >= r2){
			break;
		}
	}
	cout << ans;
	return 0;
}
