#include<bits/stdc++.h>
#define fi first
#define se second
#define endl '\n'
using namespace std;
const int N=2e5+10;
int n,m,a[N],ans,f,ff;
vector<int> v;
int _log(int x){
	int cnt=0;
	while(x){
		x/=2;
		if(x>0)cnt++;
	}
	return cnt;
}
void dfs(int x,int cnt){
	if(cnt>m)return;
	if(x>n){
		ans=v[0];
		for(int i:v){
			ans&=i;
		}
		return;
	}
	v.push_back(a[x]);
	dfs(x+1,cnt+1);
	v.pop_back();
	dfs(x+1,cnt);
}
void solve_bl(){
	v=vector<int>();
	dfs(1,1);
	cout<<ans;
}
void solve_m1(){
	for(int i=1;i<=n;++i)ans=max(ans,a[i]);
	cout<<ans;
}
void solve_mn(){
	ans=a[1];
	for(int i=1;i<=n;++i)ans&=a[i];
	cout<<ans;
}
void solve_m2(){
	for(int i=1;i<=n-1;++i)
		for(int j=i+1;j<=n;++j)
			ans=max(ans,a[i]&a[j]);
	cout<<ans;
}
void solve_A(){
	sort(a+1,a+n+1);
	cout<<a[n-m+1];
}
void solve_B(){
	if(m<=_log(n))cout<<a[n-m+1];
	else cout<<0;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	if(pow(2,_log(n))!=n)ff=1;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(pow(2,_log(a[i]+1))!=a[i])f=1;
		if(a[i]!=i-1)ff=1;
	}
	if(m==1)solve_m1();
	else if(m==n)solve_mn();
	else if(n<=2000&&m==2)solve_m2();
	else if(f==0)solve_A();
	else if(ff==0)solve_B();
	else if(n<=20)solve_bl();
	return 0;
}