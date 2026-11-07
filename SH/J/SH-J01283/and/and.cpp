#include <bits/stdc++.h>
using namespace std;
int n, m, a[200010];;
bool cmp(int a, int b) {
	return a>b;
}
void solve2(){
	int ans = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j < i; j++){
			ans = max(ans, a[i]&a[j]);
		}
	}
	cout << ans;
}
void solve1(){
	cout << *max_element(a+1, a+1+n);
}
int digit(int n){
	int ans = 0;
	while(n/=2) ans++;
	return ans;
}
int ans = 0;

void solve(int l, int r){
	int max2dig = 0;
	int nmax[40] = {};
	for(int i = l; i <= r; i++){
		int x = a[i];
		max2dig = max(max2dig, digit(x));
		nmax[digit(x)]++;
	}
	sort(a+1, a+1+n, cmp);
	bool b = 0;
	while(nmax[max2dig] < m){
		max2dig--;
		if(!max2dig){
			cout << ans;
			return ;
		}
	}
	int t = 1;
	for(int i=l ;i<= r; i++){
		if(digit(a[i]) == max2dig) {
			t = i;
			b=1;
			break;
		}
	}
	
	for(int i = t; i <= min(r,t+nmax[max2dig]-1); i++){
		a[i] -= pow(2, max2dig-1);
		if(a[i] == 0) {
			cout << ans;
			return ; 
		}
	}
	if(b) ans += pow(2, max2dig-1);
	solve(t, min(r,t+nmax[max2dig]-1));
}
int main(){
	freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
	cin >> n >> m;

	for(int i = 1; i <= n; i++){
		cin >> a[i];
		
	}
	if(m == 2 && n <= 2001) solve2();
	else if(m == 1 && n <= 2001) solve1();
	else{
		solve(1, n);
	}
	return 0;
}
