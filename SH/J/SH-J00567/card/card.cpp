#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=500009,M=300009;
ll a[N],m,n,ans[M];
void seek(ll idx,ll x){
	ans[a[idx]]++;
	if(idx>n){
		return;
	}
	for(ll i=n;i>idx;i--){
		if(a[i]==x){
			seek(i+1,a[i+1]);
			return;
		}
	}
	seek(idx+1,a[idx+1]);
}
void solveBF1(){
	if(m==1){
		cout<<n;
		return;
	}
	ll ans1=0,ans2=0;
	for(ll i=1;i<=n;i++){
		if(a[i]==1){
			ans1++;
			if(a[n]==2){
				ans2++;
			}
			continue;
		}
		ans2++;
		if(a[n]==1) ans1++;
	}
	cout<<ans1<<" "<<ans2;
	return;
}
void solveBF2(){
	for(ll i=1;i<=n;i++){
		seek(i,a[i]);
	}
	return;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=5 && m<=2){
		solveBF1();
		return 0;
	}
	else{
		solveBF2();
		for(ll i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
		return 0;
	}
} 
