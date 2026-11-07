#include<bits/stdc++.h> 
using namespace std;
const int N=2e5+5;
int n,m;
long long a[N],ans=0;
void m1(){
	long long p=-1;
	for(int i=1;i<=n;i++){
		p=max(p,a[i]);
	}
	cout<<p;
	return;
}
void mn(){
	long long p=a[1];
	for(int i=2;i<=n;i++){
		p=(p&a[i]);
	}
	cout<<p;
	return;
}
void mn1(){
	long long pre[N],suf[N],p;
		pre[1]=a[1],suf[n]=a[n];
		for(int i=2;i<=n;i++){
			pre[i]=(pre[i-1]&a[i]);
		}
		for(int i=n-1;i>=1;i--){
			suf[i]=(suf[i+1]&a[i]);
		}
		p=max(suf[2],pre[n-1]);
		for(int i=2;i<n;i++){
			p=max(p,(pre[i-1]&suf[i+1]));
		}
		cout<<p;
		return;
}
void m2(){
	long long p=-1;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			p=max(p,(a[i]&a[j]));
		}
	}
	cout<<p;
	return;
}
void dfs(int p,long long sum,int cnt){
	if(cnt==m){
		ans=max(ans,sum);
		return;
	}
	if(sum==0&&cnt!=0){
		return;
	}
	if(p>n){
		return;
	}
	dfs(p+1,sum,cnt);
	if(cnt==0&&sum==0){
		dfs(p+1,a[p],cnt+1);
	}
	else{
		dfs(p+1,sum&a[p],cnt+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		m1();
	}
	else if(m==n){
		mn();
	}
	else if(m==n-1){
		mn1();
	}
	else if(m==2){
		m2();
	}
	else{
		dfs(1,0,0);
		cout<<ans;
	}
	return 0;
}