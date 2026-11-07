#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll a[200009];
bool cmp(ll x,ll y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
cin>>n>>m;
for(ll i=1;i<=n;i++){
	cin>>a[i];
}
if(m==1){
sort(a+1,a+n+1,cmp);
	cout<<a[1];
}else cout<<a[2];

	
	return 0;
}
