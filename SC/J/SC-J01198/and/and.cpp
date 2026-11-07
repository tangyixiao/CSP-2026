#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100],maxx=-1000,f;
bool vis[100];
void c(){
	f=0;
	int ans;
	for(int i=1;i<=n;i++){
		if(vis[i]){
		    f++;
		    if(f==1){
		    	ans=a[i];
			}else{
				ans&=a[i];
			}
		}
	}
	if(ans>maxx){
		maxx=ans;
		for(int i=1;i<=n;i++){
		    cout<<vis[i]<<" ";
	    }
	    cout<<endl<<maxx<<endl;
	}
}
void dfs(int now,int num){
	if(now>n){
		if(num==m){
			c();
		}
		return;
	}
	vis[now]=1;
	dfs(now+1,num+1);
	vis[now]=0;
	dfs(now+1,num);
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1,0);
	cout<<maxx;
	return 0;
}