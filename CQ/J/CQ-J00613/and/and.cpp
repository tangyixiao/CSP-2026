#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=2e5+5;
ll n,m,ans=0;
ll a[N],b[N];ll ib;
ll mi[50];

bool cmp(ll a,ll b){
	return a>b;
}
void Get_in(){
	mi[0]=1;
	for(ll i=1;i<=30;i++)mi[i]=mi[i-1]*2;
	cin>>n>>m;
	ib=n;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	for(ll i=1;i<=n;i++)b[i]=a[i];
	return ;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	Get_in();
	for(ll z=30;z>=0;z--){
		ll w=mi[z],tot=0;
		for(ll i=1;i<=ib;i++){
			if((b[i]&w)>=w){
				tot++;
			}
		}
		if(tot>=m){
			ans+=w;
			ll j=0;
			for(ll i=1;i<=ib;i++){
				if((b[i]&w)>=w){
					a[++j]=b[i];
				}
			}
			ib=j;
			for(ll i=1;i<=ib;i++){
				b[i]=a[i];
			}
		}
	}
	cout<<ans<<'\n';
	
	return 0; 
}
