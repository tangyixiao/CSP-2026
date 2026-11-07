#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, a[200005], cnt = 0, up, down;
ll st[200005], ed[200005], dst[200005], ded[200005], ans = 0;
char c[200005], dc[200005];
ll len = 0, lenn = 0;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
		st[i] = len + 1;
		ed[i] = st[i] + a[i] - 1;
		len += a[i];
	}//2e5
	lenn = len / 2;
	int qwq = len - lenn;
	for(int i = n; ed[i] >= qwq; i--){
		//1 2 3 4 5
		//3 4 5
		
		dst[++cnt] = len - ed[i] + 1;
		ded[cnt] = dst[cnt] + a[i] - 1;
		
		dc[cnt] = c[i];
		if(ded[i] >= qwq){
			cout << 7891;
			ded[i] = qwq;
			if(qwq != lenn){
				cout << 7891;
				ded[i] -= 1;
			}
		}
	}
	for(int i = 1; i <= n - 1; i++){
		if(ed[i] >= lenn && st[i] <= lenn) ed[i] = lenn;
	}
	//2e5
	//4 24474
	//5 479681762610
	//6 24104423
	/*
	3
	2 a
	2 b
	1 c
	*/
	/*
	aabbc
	aa
	cb
	1 2     1 1  2 2
	*/
	up = 1, down = 1;
	ll nst = st[up], ndst = dst[down], ned = ed[up], nded = ded[down];//nst 2    ndst 2    ned 2    nded 2    up 1    down 2
	while(ned <= lenn && nded <= lenn){
		if(ned <= nded){
			if(c[up] == dc[down]){
				ndst = ed[up] + 1;
				up ++;
				nst = st[up], ned = ed[up];
			}
			else{
				ans += ed[up] - nst + 1;
				ndst = ed[up] + 1;
				up ++;
				nst = st[up], ned = ed[up];
			}
		}
		else{
			if(c[up] == dc[down]){
				nst = ded[down] + 1;
				down ++;
				ndst = dst[down], nded = ded[down];
			}
			else{
				ans += ded[down] - ndst + 1;
				nst = ded[down] + 1;
				down ++;
				ndst = dst[down], nded = ded[down];
			}
		}
	}
	cout << ans;
	return 0;
}
