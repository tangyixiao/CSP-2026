#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=5e5+10;
void csh(ll ton[],ll m){
	for(ll i=1;i<=m;i++){
		ton[i]=0;
	}
}
void qjcsh(ll ton[],ll l,ll r){
	for(ll i=l;i<=r;i++){
		ton[i]=0;
	}
}
ll n,m,a[N],ton[N],tonn[N],cnt[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(ll i=1;i<=n;i++){
		cin >> a[i];
	}
	for(ll i=1;i<=n;i++){
		ll d=i;
		for(ll j=i;j<=n;j++){
			ton[a[j]]+=1;
			cnt[d]=a[j];
			d+=1;
			if(ton[a[j]]>1){
				ll p;
				for(ll k=i;k<j;k++){
					if(cnt[k]==a[j]){
						p=k;
						break;
					}
				}
				qjcsh(ton,p,m);
				ton[a[j]]=1;
			}
		}
		for(ll j=1;j<=m;j++){
			if(ton[j]==1){
				tonn[j]+=1;
			}
		}
		csh(ton,m);
	}
	for(ll i=1;i<=m;i++){
		cout << tonn[i] << " ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
