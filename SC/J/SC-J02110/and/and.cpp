#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
int n,m,ans,flag;
int a[N],frt[N],bck[N],b[30];
void dfs(int x,int cnt,int val){
	if(x > n) return ;
	if(cnt == m){
		ans = max(ans,val & a[x]);
		return;
	}
	
	dfs(x + 1,cnt,val);
	cnt++;
	dfs(x + 1,cnt,val & a[x]);
	cnt--;
}
void solve1(){
	dfs(1,1,b[30] - 1);
	cout << ans;
}
void solve2(){
	for(int i = 1;i <= n;i++) ans = max(ans,a[i]);
	cout << ans;
}
void solve3(){
	ans = b[30] - 1;
	for(int i = 1;i <= n;i++) ans = ans & a[i];
	cout << ans;
}
void solve4(){
	int temp = b[30] - 1;
	for(int i = 1;i <= n;i++){
		temp = temp & a[i];
		frt[i] = temp;
	}
	temp = b[30] - 1;
	for(int i = n;i >= 1;i--){
		temp = temp & a[i];
		bck[i] = temp;
	}
	frt[0] = b[30] - 1;
	bck[n + 1] = b[30] - 1;
	for(int i = 1;i <= n;i++){
		ans = max(ans,frt[i - 1] & bck[i + 1]);
	}
	cout << ans;
}
void solve5(){
	sort(a + 1,a + n + 1);
	ans = a[n - m + 1];
	cout << ans;
}
bool finds(int x){
	for(int i = 1;i <= 30;i++){
		if(x == b[i]) return true;
	}
	return false;
}
int main(){
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	b[1] = 2;
	for(int i = 2;i <= 20;i++) b[i] = b[i - 1] * 2;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		if(!finds(a[i] + 1)) flag = 0;
	}
	if(m <= 20 && n <= 2000) {
		solve1();
		return 0;
	}
	if(m == 1){
		solve2();
		return 0;
	}
	if(m == n){
		solve3();
		return 0; 
	}
	if(m == n - 1){
		solve4();
		return 0;
	}
	if(flag == 1){
		solve5();
		return 0;
	}
	return 0;
}