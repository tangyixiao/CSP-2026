#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll MAXN=200010;
ll n,m;
ll arr[MAXN];
bool cmp(ll a,ll b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n,cmp);
	ll maxn=-1;
	for(ll i=1;i<n;i++){
		ll cnt=arr[0];
		for(ll j=i;j<i+m-1;j++){
			cnt=cnt&arr[j];
		}
		if(cnt>maxn){
			maxn=cnt;
		}
	}
	cout<<maxn;
	return 0;
}
