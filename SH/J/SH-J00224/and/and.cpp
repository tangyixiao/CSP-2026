#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],ans;
void dfs(int x,int stp,int chs){
	if(chs == m&&stp == n){ans = max(ans,x);return;}
	if(stp > n)return;
	if(chs > m)return;
	if(chs + (n - stp) < m)return;
	dfs(x,stp + 1,chs);
	x &= a[stp];
	dfs(x,stp + 1,chs + 1);
}
void solve_BF(){
	dfs(INT_MAX,0,0);
	cout<<ans;
}
bool check1(){
	for(int i = 1;i <= n;i++)
		if(pow(sqrt(a[i] + 1),2) != a[i])return 0;
	return 1;
}
bool cmp(int a,int b){
	return a > b;
}
bool pow2(int x){
	while(x > 1){
		if(x % 2)return 0;
		x /= 2;
	}
	return 1;
}
bool check2(){
	if(pow2(n)){
		for(int i = 1;i <= n;i++)
			if(a[i] != i - 1)return 0;
		return 1;
	}
	return 0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++)cin>>a[i];
	if(m == 1){cout<<*max_element(a + 1,a + 1 + n);return 0;}
	else if(m == n){
		int ans = a[1];
		for(int i = 2;i <= n;i++)ans &= a[i];
		cout<<ans;
		return 0;
	}
	else if(check1()){
		sort(a + 1,a + 1 + n,cmp);
		cout<<a[m];
		return 0;
	}
	else if(check2()){
		sort(a + 1,a + 1 + n,cmp);
		int ans = a[1];
		for(int i = 2;i <= m;i++)
			ans &= a[i];
		cout<<ans;
		return 0;
	}
	else solve_BF();
	return 0;
}
