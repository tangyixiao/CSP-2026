#include<iostream>
#include<vector>
#include<cmath>
using ll=long long;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	ll n,m;
	std::cin>>n>>m;
	ll logn=std::log2(n);
	std::vector<ll>a(n),pre(m,-1);
	std::vector<std::vector<ll>>nxt(n,std::vector<ll>(logn+1,-1));
	for(ll i=0;i<n;++i){
		std::cin>>a[i];
		if(pre[a[i]]!=-1){
			nxt[pre[a[i]]][0]=i;
		}
		pre[a[i]]=i;
	}
	for(ll j=1;j<=logn;++j){
		for(ll i=0;i<n;++i){
			if(nxt[i][j-1]!=-1){
				nxt[i][j]=nxt[nxt[i][j-1]][j-1];
			}
		}
	}
	std::vector<ll>num(m+1);
	for(ll st=0;st<n;++st){
		std::vector<bool>vis(m+1);
		for(ll now=st;now<n;++now){
			vis[a[now]]=true;
			for(ll j=logn;j>=0;--j){
				if(nxt[now][j]!=-1){
					now=nxt[now][j];
				}
			}
		}
		for(ll i=1;i<=m;++i){
			num[i]+=vis[i];
		}
	}
	for(ll i=1;i<=m;++i){
		std::cout<<num[i]<<" ";
	}
	return 0;
}
