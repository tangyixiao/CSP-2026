/*
10 3
3 1 2 1 3 2 3 1 2 1

*/
#include<bits/stdc++.h>
using namespace std;
#define xiawolei ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define aodaita freopen("card.in","r",stdin);freopen("card.out","w",stdout);
using ll=long long;
using ld=long double;
const ll o=5e5+5;
const ll oc=0x3f3f3f3f3f3f3f3f;
const ll mod=1e9+7;
const ld eps=0.0001;
ll n,m,a[o],lst[o],num[o];
void dfs(ll i){
	if(i>n)return;
	num[a[i]]++;
	ll id=lst[a[i]]+1;
	dfs(id);
	return;
}
int main(){
	xiawolei
	aodaita
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		lst[a[i]]=i;
	} 
	for(int i=1;i<=n;i++){
		dfs(i);
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}
