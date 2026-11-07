#include <bits/stdc++.h>
using namespace std;
long long n;
struct node{
	int l;char c;
}p[200001], q[200001];
long long cnt;
long long len, l, ll, ans;
int main(){
//	ios::sync_with_stdio(0);
//	cin.tie(0);cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> p[i].l >> p[i].c, len += p[i].l;
	l = len / 2;
	ll = len;
	for(int i = n; i >= 1; i--){
		ll -= p[i].l;
		++cnt;
		n--;
		q[cnt].l = p[i].l;
		q[cnt].c = p[i].c;
		if(ll < l){
			int k = l - ll;
			p[i].l = k;
			q[cnt].l -= k;
			n++;
			break;
		}
		if(ll == l) break;
	}
	//分两组（前后） OK
	if(len & 1) q[cnt].l--;//去掉中间的（奇数） 
	if(q[cnt].l == 0) --cnt;
//	for(int i = 1; i <= n; i++) cout << p[i].l << ' ' << p[i].c << '\n';
//	for(int i = 1; i <= cnt; i++) cout << '\n' << q[i].l << ' '<< q[i].c;
//	cout << '\n'; 
	int i, j;
	i = j = 1;
	while(i <= n && j <= cnt){
		while(p[i].l == 0) i++;
		while(q[j].l == 0) j++; 
//		cout << i << ' ' << j << '\n';
		if(p[i].c != q[j].c){
			ans += min(p[i].l, q[j].l); 
		}
		if(p[i].l < q[j].l){
			q[j].l -= p[i].l;
			i++;
		}else{
			p[i].l -= q[j].l;
			j++;
		}
	}
	cout << ans;
	return 0;
}