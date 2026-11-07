#include<iostream>
using namespace std;
typedef long long ll;
ll MAX=1e9;
ll n,m,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	ll a[MAX]={};
	for(ll i=0;i<n;++i){
		cin>>a[i];
	}
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			ans=max(ans,a[i]&a[j]);
		}
	}
	cout<<ans;
	return 0;
}
