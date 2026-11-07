#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200009],ans;
int base[39],cnt[39];
bool vst[200009];
string t[200009];
void _init(){
	int x = 2;
	for(int i = 1;i < 32;i++){
		base[i] = x - 1;
		x *= 2;
	}
	return;
}
string tentotwo(int x){
	string s = "";
	int y = 1;
	while(x){
		if(x % 2 == 0){
			s += "0";
		}else{
			s += "1";
			cnt[y]++;
		}
		y++;
		x /= 2;
	}
	return s;
}
void dfs(int s,int d){
	if(s >= m){
		ans = max(ans,d);
		return;
	}
	for(int i = 0;i < n;i++){
		if(vst[i]) continue;
		vst[i] = 1;
		if(s == 0) d = a[i];
		dfs(s + 1,d & a[i]);
		vst[i] = 0;
	}
	return;
}
int main(){
	ios::sync_with_stdio(false);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	bool A = 1,B = 1,C = 1;
	_init;
	cin>>n>>m;
	for(int i = 0;i < n;i++){
		cin>>a[i];
		if(a[i] != i) B = 0;
		if(a[i] >= 4) C = 0;
		for(int j = 0;j < 31;j++){
			if(base[j] > a[i]) A = 0;break;
			if(base[j] == a[i]) break;
		}
	}
	
	if(m == 1){
		int maxa = 0;
		for(int i = 0;i < n;i++){
			maxa = max(maxa,a[i]);
		}
		cout<<maxa;
		return 0;
	}
	
	if(n == m){
		ans = a[0];
		for(int i = 1;i < n;i++){
			ans &= a[i];
		}
		cout<<ans;
		return 0;
	}
	
	if(n <= 2000 and m == 2){
		for(int i = 0;i < n;i++){
			for(int j = i + 1;j < n;j++){
				ans = max(ans,a[i] & a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	
	if(n <= 20){
		dfs(0,0);
		cout<<ans;
		return 0;
	}
	
	if(A){
		sort(a,a + n);
		cout<<a[n - m];
		return 0;
	}
	
	if(C){
		int a1,a2,a3;
		for(int i = 0;i < n;i++){
			if(a[i] == 1) a1++;
			if(a[i] == 2) a2++;
			if(a[i] == 3) a3++;
		}
		if(m <= a3) cout<<3;return 0;
		if(m <= (a2 + a3)) cout<<2;return 0;
		if(m <= (a1 + a3)) cout<<1;return 0;
		cout<<0;
		return 0;
	}
	for(int i = 0;i < 31;i++){
		if(n < (base[i] + 1)) B = 0;break;
		if(n == (base[i] + 1)) break;
	}
	
	if(B){
		int dif = n - m;
		for(int i = 0;i < 31;i++){
			if(dif > (base[i] + 1)){
				ans = base[i] + 1;
			}else{
				break;
			}
		}
		cout<<ans;
		return 0;
	}
	
	
	for(int i = 0;i < n;i++){
		t[i] = tentotwo(a[i]);
	}
	for(int i = 30;i >= 0;i--){
		if(cnt[i] >= m){
			ans += pow(2,i);
		}
	}
	cout<<ans;
	//cout<<1;
	return 0;
}
