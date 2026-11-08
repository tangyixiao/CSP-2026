#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+10;
int n,m,a[maxn],d[maxn*4],b[maxn*4],ans[maxn],vis[maxn];
bool flag[maxn];
void push_up(int p){
	d[p]=d[p<<1|1]+d[p<<1];
}
void push_down(int l,int r,int p){
	int mid=(l+r)>>1;
	d[p<<1]+=(mid-l+1)*b[p];b[p<<1]+=b[p];
	d[p<<1|1]+=(r-mid)*b[p];b[p<<1|1]+=b[p];
	b[p]=0;
}
void updata(int s,int t,int l,int r,int p,int k){
	if(s<=l&&r<=t){d[p]+=(r-l+1)*k;b[p]+=k;return;}
	if(b[p])push_down(l,r,p);int mid=(l+r)>>1;
	if(mid>=s)updata(s,t,l,mid,p<<1,k);
	if(mid<t)updata(s,t,mid+1,r,p<<1|1,k);
	push_up(p); 
}
int query(int s,int l,int r,int p){
	if(s==l&&r==l)return d[p];
	if(b[p])push_down(l,r,p);int mid=(l+r)>>1;
	if(mid>=s)return query(s,l,mid,p<<1);
	else return query(s,mid+1,r,p<<1|1); 
} 
void work(int x){
	for(int i=x;i<=n;i++){
		if(!vis[a[i]])vis[a[i]]=i;
		else{
			if(query(vis[a[i]],1,n,1)==0)updata(vis[a[i]],i-1,1,n,1,1);
			vis[a[i]]=i;
		}
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n<=5000){
		for(int i=1;i<=n;i++){
			work(i);
			for(int j=i;j<=n;j++){
				if(query(j,1,n,1)==0){ans[a[j]]++;}
			}
			for(int i=1;i<=4*n;i++)d[i]=b[i]=vis[i]=0;
		} 
		for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	}
	
	return 0;
}







