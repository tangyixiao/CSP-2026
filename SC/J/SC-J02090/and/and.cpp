#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200005],f[200005];
int main(){
	freopen("and.in",r,stdin);
	freopen("and.out",w,stdout);
	ll n,m;
	ll mx=INT_MIN,k=0;
	cin>>n>>m;
	if(m==1){
		for(int i=1;i<=n;i++){
			mx=max(mx,a[i]);
		}
		cout<<mx;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[i]=a[i]&a[i-1];
	}
	for(int i=1;i<=n;i++){
		mx=max(mx,f[i]);
	}
	cout<<mx;
	return 0;
}