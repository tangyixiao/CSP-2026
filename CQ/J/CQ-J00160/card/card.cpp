#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,a[500005],ans[300005],fa[500005],fi[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i];
	for(ll i=n;i>=1;i--){
		fa[i]=fi[a[i]];
		fi[a[i]]=i;
		int k=i;
		while(k<=n){
			while(fa[fa[k]]!=0){
				fa[k]=fa[fa[k]];
			}if(fa[k]!=0)k=fa[k];
			ans[a[k]]++;
			k++;
		} 
	}for(ll i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
