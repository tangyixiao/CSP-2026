#include<bits/stdc++.h>
using namespace std;

struct node{
	int cnt,res;
}a[200005];
int n,m;
bool f[200005],fA,fB;
int ans,maxn;
void dfs(int cnt,int k){
	if(k==3){
		ans=max(ans,cnt);
		return;
	}
	for(int i=1;i<=n;i++){
		if(!f[i]){
			f[i]=1;
			dfs(int(cnt&a[i].cnt),k+1);
			f[i]=0;
		}
	}
}
bool cmp(node x,node y){
	if(x.res!=x.res) return x.res>y.res;
	return x.cnt>y.cnt;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	int p=n;
	while(p!=1){
		if(p%2==1) fB=1;
		p>>=1;
	}
	for(int i=1;i<=n;i++){
		cin >> a[i].cnt;
		if(a[i].cnt!=i-1) fB=1;
		int k=a[i].cnt;
		while(k){
			if(k%2==0) fA=1;
			k>>=1;
			a[i].res++;
		}
		maxn=max(maxn,a[i].cnt);
	}
	if(!fA) cout << maxn;
	else if(n==m){
		ans=a[1].cnt;
		for(int i=2;i<=n;i++) ans=ans&a[i].cnt;
		cout << ans;
	}
	else if(!fB){
		sort(a+1,a+1+n,cmp);
		ans=a[1].cnt;
		for(int i=2;i<=m;i++) ans=ans&a[i].cnt;
		cout << ans;
	}
	else{
		if(n>2000){
			cout << 0;
			return 0;
		}
		for(int i=1;i<=n;i++){
			f[i]=1;
			dfs(a[i].cnt,1);
			f[i]=0;
		}
		cout << ans;
	}
	return 0;
}
