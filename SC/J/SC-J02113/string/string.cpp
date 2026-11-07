#include<bits/stdc++.h>
using namespace std;
int n;
long long len, ans;
struct node{
	long long x; char c;
}a[200005];

int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i ++){
		cin >> a[i].x >> a[i].c;
		len += a[i].x;
	}
	int l = 0, r = n;
	long long ll = 0, rr = len;
	while(r > l){
		if(a[l].x == a[r].x && a[l].c == a[r].c){
			ll += a[l].x, rr -= a[r].x;
			l ++, r --;
			continue;
		}
		else if(a[l].c == a[r].c){
			if(a[l].x < a[r].x){
				ll += a[l].x, rr -= a[l].x;
				a[r].x -= a[l].x;
				l ++;
				continue;
			}
			else{
				ll += a[r].x, rr -= a[r].x;
				a[l].x -= a[r].x;
				r --;
				continue;
			}
		}
		else{
			if(a[l].x < a[r].x){
				ll += a[l].x, rr -= a[l].x;
				a[r].x -= a[l].x;
				ans += a[l].x;
				l ++;
				continue;
			}
			else{
				ll += a[r].x, rr -= a[r].x;
				a[l].x -= a[r].x;
				ans += a[r].x;
				r --;
				continue;
			}
		}
	}
	cout << ans;
	return 0;
}