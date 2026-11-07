#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=500005,M=300005;
ll n,m,a[N],ans[M];
struct okk{
	bool o=0;ll p;
};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i];
	for(ll i=1;i<=n;i++){
		ll zhan[N],top=0;okk ok[N];
		for(ll j=i;j<=n;j++){
			if(!ok[a[j]].o) {
				zhan[++top]=a[j];ok[a[j]].o=true,ok[a[j]].p=top;
			}else{
				ll to=ok[a[j]].p;
				for(ll k=top;k>to;k--) ok[zhan[k]].o=0,ok[zhan[k]].p=0;
				top=to;
			}
		}
		for(ll j=1;j<=top;j++)ans[zhan[j]]++;
	}
	for(ll i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
