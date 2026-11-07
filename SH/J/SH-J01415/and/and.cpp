#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,m,a[N],sum[N],ans,maxn;
bool isB=1; 
void dfs(long long num,long long i,long long t){
	if(i>n)return ;
	if(t==m){
		ans=max(ans,num);
		return ;
	}
	dfs(num&a[i],i+1,t+1);
	dfs(num,i+1,t);
	return ;
}
void solve_easy(){
	for(int i=1;i<=n;i++){
		dfs(a[i],i+1,1);
	}
	cout<<ans;
	return ;
}
void solve1(){
	if(m==1){
		cout<<maxn;
		return ;
	}
	else if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return ;
	}
	else if(n==m){
		cout<<sum[n];
	}
	return ;
}
void solveB(){
	ans=a[n];
	for(int i=n-1;i>=n-m+1;i--)ans&=a[i];
	cout<<ans;
	return ;
}
void solveC(){
	cout<<sum[n];
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1)isB=0;
		maxn=max(a[i],maxn);
		if(i==1)sum[i]=a[i];
		else sum[i]=sum[i-1]&a[i];
	}
	if(n<=20)solve_easy();
	else if(n<=2000)solve1();
	else if(isB)solveB();
	else if(n==m)cout<<sum[n];
	else if(m==n-1)solveC();
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
