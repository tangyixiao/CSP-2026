#include<bits/stdc++.h> 
using namespace std;
long long dp[1000010],a[1000010],b[100010],vis[100010];
long long n,m,maxv=0;
long long f(long long x,long long y){
	long long idx=0,idy=0,t[1010],t2[1010],ans[1010];
	long long sum=0;
	while(x){
		idx++;
		t[idx]=x%2;
		x/=2;
	}
	while(y){
		idy++;
		t2[idy]=y%2;
		y/=2;
	}
	for(int i=1;i<=min(idx,idy);i++){
		if(t[i]==1&&t2[i]==1){
			a[i]=1;
		}
	}
	for(int i=1;i<=min(idx,idy);i++){
		long long t3=1;
		if(a[i]==1){
			for(int j=1;j<i;j++){
				t3*=2;
			}sum+=t3;
		}
	}return sum;
}
void dfs(long long x){
	if(x>m){
		long long sum=f(b[1],b[2]);
		for(int i=2;i<=m;i++){
			sum=f(sum,b[i]);
		}maxv=max(maxv,sum);
		return ;
	}for(int i=x;i<=n;i++){
		if(vis[i])continue;
		b[x]=a[i];
		vis[i]=1;
		dfs(x+1);
		vis[i]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<20){
	   dfs(1);
	   cout<<maxv;
    }
	else{
	    dp[0]=2e30-1;
    	for(int i=1;i<=n;i++){
    		for(int j=m;j>=1;j--){
    			dp[j]=max(dp[j],f(dp[j-1],a[i]));
			}
		}cout<<dp[m];
	}
	return 0;
}
