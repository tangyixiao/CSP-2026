#include<bits/stdc++.h>
using namespace std;
const int N=200000,M=200000;
int read(){
	int x=0,f=1;
	char c=getchar();
	while(c<'0'||c>'9'){
		if(c=='-') f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		x=x*10+(c-'0');
		c=getchar();
	}
	return x*f;
}

int n,m;
int a[N+10];
int ans=0;
int vis[N+10];
void dfs(int num,int k){
	if(k==m){
		ans=max(ans,num);
		return;
	}
	for(int i=1; i<=n; i++)
	{
		if(!vis[i])
		{
			vis[i]=1;
			dfs(num&a[i],k+1);
			vis[i]=0;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	n=read(); m=read();
	for(int i=1; i<=n; i++) a[i]=read();
	
	if(m==1){
		int maxx=0;
		for(int i=1; i<=n; i++) maxx=max(maxx,a[i]);
		ans=maxx;
	}else if(m==2){
		int maxx=0;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				if(i==j) continue;
				maxx=max(maxx,a[i]&a[j]);
			}
		}
		ans=maxx;
	}else if(m==n){
		for(int i=1; i<=n; i++) ans&=a[i];
	}else{
		dfs(pow(2,20)-1,0);
	}
	
	printf("%d",ans);
    return 0;
}
