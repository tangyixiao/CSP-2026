#include<bits/stdc++.h>
using namespace std;
const int N=500005,M=300005;
int n,m,a[N],cnt[M];
bool vis[M];
void f(){
	for(int i=1;i<=m;i++)
	    if(vis[i]) cnt[i]++;
}
void _f(int x,int y){
	x--;
	while(y!=a[x]&&vis[a[x]]){
		vis[a[x]]=false;
		x--;
	}
}
bool flag=true;
int main(){
	freopen("card.in","r",stdin) ;
    freopen("card.out","w",stdout) ;
    memset(vis,false,sizeof(vis));
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) flag=false;
	}
	if(flag){
		for(int i=1;i<=m;i++)
		    cout<<n<<" ";
	    return 0;
	}
	for(int i=1;i<=n;i++){
	    for(int j=i;j<=n;j++){
		    if(!vis[a[j]]){
			    vis[a[j]]=true;
		     }
		    else {
			    _f(i,a[j]);
			    
		    }
	    }
		f();
	}
	for(int i=1;i<=m;i++)
	    cout<<cnt[i]<<" ";
    return 0;
}