#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
const ll N=200009;
ll cnt[N],a[N],flag;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;++i){
		cin>>a[i];
		cnt[a[i]]++;
	}
	for(ll i=1;i<n;++i)
		if(a[i]>a[i+1]){
			flag=1;
			break;
		}
	if(flag==0){
		cout<<cnt[1]<<" ";
		for(ll i=2;i<=m;++i){
			cnt[i]+=cnt[i-1];
			cout<<cnt[i]<<" ";
		}
	}
	return 0;
}
