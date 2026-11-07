#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m;
ll a[500010];
ll st[500010];
ll ans[500010];
ll si[500010];
bool edg[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		si[i]=i;
	}
	for(ll i=1;i<=n;i++){
		memset(st,0,sizeof st);
		memset(edg,false,sizeof edg);
		for(ll j=i;j<=n;j++){
			if(st[a[j]]==0){
				st[a[j]]=j;
			}
			else{
				for(ll k=1;k<=m;k++){
					if(si[k]>=i and (si[k]<st[a[j]] or si[k]>=j)) edg[k]=true;
					else edg[k]=false;
				}
				st[a[j]]=j;
			}
		}
		for(ll j=1;j<=m;j++){
			if(edg[j]) ans[j]++;
		}
	}
	for(ll i=1;i<=m;i++) cout<<ans[i]<<" "; 
}
