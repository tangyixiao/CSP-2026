#include<bits/stdc++.h>
using namespace std;
int n,m,f,mx,a[200010],b[50],mxx,vid[60];
int vis[200010][60];
int dfs(int x,int y){
	if(x>m){
		int k=b[1];
		for(int i=2;i<=m;i++){
			k&=b[i];
		}
		mxx=max(mxx,k);
		return 0;
	}
	for(int i=y;i<=n;i++){
		b[x]=a[i];
		dfs(x+1,i+1);
		b[x]=0;
	}
}
void ccca(int p,int x){
	int i=1;
	while(x){
		if(x%2==1){
			vis[p][i]=1;
			vid[i]++;
		}
		x/=2;
		i++;
	}
}
int bbs(int p){
	int zx=0;
	int erj=1;
	for(int i=1;i<=30;i++){
		int yui=0;
		if(vis[p][i])yui=1;
		if((vid[i]-yui)>=1)zx+=erj;
		erj*=2;
	}
	return zx;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==1){
		for(int i=1;i<=n;i++){
			cin>>a[i];
			mx=max(mx,a[i]);
		}
		cout<<mx;
	}
	else if(m==n){
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(i==1){
				f=a[i];
			}else{
				f=(f&a[i]);
			}
		}
		cout<<f;
	}else if(n<=20){
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		dfs(1,1);
		cout<<mxx;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		dfs(1,1);
		cout<<mxx;
	}else if(m==n-1){
		for(int i=1;i<=n;i++){
			cin>>a[i];
			ccca(i,a[i]);
		}
		for(int i=1;i<=n;i++){
			mx=max(mx,bbs(i));
		}
		cout<<mx;
	}else{
		for(int i=1;i<=n;i++){
			cin>>a[i];
			mx=max(mx,a[i]);
		}
		cout<<mx;
	}
	return 0;
}
