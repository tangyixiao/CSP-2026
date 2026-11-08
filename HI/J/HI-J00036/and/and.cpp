#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,m,a[N],ans=0;
bool f[N];
void dfs(int x,int st){
	if(x>m){
		long long sum=-1;
		for(int i=1;i<=n;i++){
			if(f[i]){
				if(sum==-1){
					sum=a[i];
				}
				else{
					sum&=a[i];
				}
			}
		}
		ans=max(ans,sum);
		return;
	}
	for(int i=st;i<=n;i++){
		if(f[i]==0){
			f[i]=1;
			dfs(x+1,i+1);
			f[i]=0;
		}
	}
}
bool checkB(long long x){
	long long t=1;
	while(t<=x){
		if(t==x)return true;
		t*=2;
	}
	return false;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	cin>>n>>m;
	bool fA=1,fB=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(n<=20){
		dfs(1,1);
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(!checkB(a[i]+1)){
			fA=0;
			break;
		}
	}
	if(fA){
		if(m)ans=a[n];
		for(int i=n-1;i>=n-m+1;i--){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	} 
	for(int i=1;i<=n;i++){
		if(a[i]!=i-1){
			fB=0;
			break;
		}
	}
	if(fB){
		if(checkB(n)){
		//	sort(a+1,a+n+1);
			if(m)ans=a[n];
			for(int i=n-1;i>=n-m+1;i--){
				ans&=a[i];
			}
			cout<<ans;
			return 0;
		}
	}
	ans=a[n];
	for(int i=n-1;i>=n-m+1;i--){
		ans&=a[i];
	}
	cout<<ans;
	return 0;
} 
