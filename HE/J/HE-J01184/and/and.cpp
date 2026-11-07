#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a[200100],r[200100][32],bj,jl[200100],minn=1e11;
//Trick||Treat!
void ds(ll s,ll p){
	ll xb=1,l=s;
	while(l>0){
		r[p][xb]=l%2;
		xb++;
		l/=2;
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		ds(a[i],i);
	}
	ll js=0,xb=1;
	for(ll i=31;i>=1;i--){
		xb=0,bj=0;
		for(ll j=1;j<=n;j++){
			if(r[j][i]==1){
				bj++;
				jl[++xb]=a[j];
			}
		}
		if(bj>=m){
			sort(jl+1,jl+xb+1);
			cout<<jl[bj-m+1];
			return 0;
		}
	}
	return 0;
} 
