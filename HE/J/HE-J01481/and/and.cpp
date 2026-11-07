#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m;
struct node{
	ll sum,num;
}k[1000001];
bool cmp(node x,node y){
	if(x.sum!=y.sum) return x.sum>y.sum;
	else return x.num>y.num; 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>k[i].num;
		ll f=0;
		for(ll j=1;j<=k[i].num;j++){
			if(pow(2,j)>=k[i].num){
				f=j;
				break;
			}
		}
		for(ll j=f;j>=0;j--){
			ll o=k[i].num;
			if(o>=pow(2,j)){
				o-=pow(2,j);
				k[i].sum++;
			}
		}
	}
	sort(k+1,k+n+1,cmp);
	ll ans=k[1].num;
	for(int i=1;i<=m;i++){
		ans=ans&k[i].num;
	}
	cout<<ans;


	return 0;
}

