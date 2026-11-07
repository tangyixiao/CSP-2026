#include <bits/stdc++.h>
using namespace std;
int n, l, r;
struct node{
	int s;
	char c;
}a[200005];
long long ll, cnt, ans;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i ++){
		cin >> a[i].s >> a[i].c;
		ll += a[i].s;
	}
	ll /= 2;
	l = 1;
	r = n;
	while(cnt < ll){
		if(a[l].s < a[r].s){
			if(a[l].c == a[r].c){
				cnt += a[l].s;
				a[r].s -= a[l].s;
			} else {
				cnt += a[l].s;
				a[r].s -= a[l].s;
				ans += a[l].s;
			}
			l ++;
		} else if(a[l].s > a[r].s){
			if(a[l].c == a[r].c){
				cnt += a[r].s;
				a[l].s -= a[r].s;
			} else {
				cnt += a[r].s;
				a[l].s -= a[r].s;
				ans += a[r].s;
			}
			r --;
		} else {
			if(a[l].c == a[r].c){
				cnt += a[l].s;
			} else {
				cnt += a[l].s;
				ans += a[l].s;
			}
			l ++; r --;
		}
	}
	cout << ans;
	return 0;
	fclose(stdin);
	fclose(stdout);
}

