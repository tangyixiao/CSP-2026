#include<bits/stdc++.h>
using namespace std;

const int N=2e5+7;
int n,m,val[N],c2[N],maxn=0;
int ans=0;
int dp[N];

void dfs(int x,int y,int v){
	if(y==m){
		ans=max(ans,v);
		return;
	}
	if(y>m)return;
	if(y+(n-x+1)<m)return;
	for(int i=x;i<=n;i++){
		if(y!=0){
			dfs(i+1,y+1,v&val[i]);
		}else{
			dfs(i+1,y+1,val[i]);
		}
		dfs(i+1,y,v);
	}
}

int inline lowbit(int x){
	return x&-x;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int sum=0;
	bool a=true;
	c2[0]=1;
	for(int i=1;i<=31;i++){
		c2[i]=c2[i-1]*2;
	}
	for(int i=1;i<=n;i++){
		cin>>val[i];
		sum=sum&val[i];
		int k=val[i],cnt=0;
		maxn=max(maxn,val[i]);
		while(k){
			k-=lowbit(k);
			cnt++;
		}
		if(val[i]!=c2[cnt]-1)a=false;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,val[i]);
		}
		cout<<ans;
	}else if(m==n){
		ans=sum;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,val[i]&val[j]);
			}
		}
	}else if(n<=20){
		dfs(1,0,0);
	}
	else if(a){
		sort(val+1,val+1+n);
		ans=val[n-m+1];
	}else if(maxn<=4){
		ans=3;
	}else{
		ans=maxn;
	}
	cout<<ans;
}