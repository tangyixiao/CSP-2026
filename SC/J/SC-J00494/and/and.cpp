#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int n,m,a[N],b[N],cnt,ans=-0x3f3f3f3f,_max,c[N];
bool vis[N];
int dfs(int x){
	if(x==m){
		int sum=b[1]|b[2];
		for(int i=3;i<=m;i++)
		   sum=sum|b[i];
	    ans=max(ans,sum);
	}
	for(int i=1;i<=n;i++){
		if(vis[a[i]]) continue;
		vis[a[i]]=true;
		cnt++;
		b[cnt]=a[i];
		dfs(x+1);
		vis[a[i]]=false;
		cnt--;
		b[cnt]=0;
	}
}
int main(){
	freopen("and.in","r",stdin) ;
    freopen("and.out","w",stdout) ;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		_max=max(a[i],_max);
		c[a[i]]++;
	}
	if(m==1){
		cout<<_max;
		return 0;
	}
	if(m==2){
		for(int i=_max;i>0;i--) 
		    if(c[i]>1){
		    	cout<<i;
		    	return 0;
			} 
	}
	dfs(0);
	cout<<ans;
	return 0;
}