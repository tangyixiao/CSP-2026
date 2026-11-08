#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e6+5;
ll n,m,a[N],ans[N];
ll ly[N],yl[N],op=0;
int main(){
	ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
	freopen("card.in","w",stdin);
	freopen("card.out","r",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(ll i=1;i<n;i++){
		op=0;
		for(int k=1;k<=n;k++){
			ly[k]=0;
			yl[k]=0;
		}
		for(ll j=i;j<=min(i+m,n);i++){
			op++;
			if(ly[a[j]]==0){
				ly[a[j]]=op;
				yl[op]=a[j];
				ans[a[j]]++; 
			}else{
				for(ll k=op;k>=yl[ly[a[j]]];k--){
					ly[yl[k]]=0;
					yl[ly[k]]=0;
					ans[yl[k]]--;
					op--;
				}
			}
		}
	}
	for(ll i=1;i<=m;i++){
		cout<<ans[i];
	}
	return 0;
}
