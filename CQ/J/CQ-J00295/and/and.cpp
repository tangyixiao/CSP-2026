#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,lmax,tmp;
ll a[200005],b[200005];
bool f1;
bool f[200005];

void dfs(ll );

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll lmin=1e18;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<=30;j++){
			if((int)pow(2,j)-1==a[i]){
				continue;
			}
		} 
		lmin=min(lmin,a[i]);
		f1=1;
	}
	if(f1==0){
		cout<<lmin;
		return 0;
	}
	dfs(1);
	cout<<lmax;
	return 0;
}

void dfs(ll step){
	if(step==m+1){
		ll andd=b[1];
		for(int i=1;i<=tmp;i++){
//			cout<<b[i]<<' ';
			andd&=b[i];
		}
//		cout<<'\n';
		lmax=max(lmax,andd);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(f[i]==0){
			f[i]=1;
			b[++tmp]=a[i];
			dfs(step+1);
			b[tmp--]=0;
			f[i]=0;
		}
	}
}
//55
