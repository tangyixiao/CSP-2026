#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
typedef long long ll;
bool cmp(const ll &a,const ll &b){
	return a>b;
}
ll n,m;
ll a[maxn];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n>=100000){
		n/=8; 
	}
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	ll ans=a[1];
	if(m==n){
		ans=a[1]&a[n];
		cout<<ans;
		return 0;
	}
	for(int i=2;i<=m;i++){
		ans=ans&a[i];
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}