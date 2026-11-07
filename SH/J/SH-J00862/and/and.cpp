#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
const int N=200010;
ll a[N];
bool cmp(ll a,ll b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	ll cnt=a[1],ma=-1;
	sort(a+1,a+1+n,cmp);
	for(ll j=1;j<=n-m+1;j++){
		for(ll i=j;i<=j+m-1;i++){
			cnt&=a[i];
		}
		ma=max(ma,cnt);
		
		cnt=a[j];
		
	}
	cout<<ma;
	return 0;
}
