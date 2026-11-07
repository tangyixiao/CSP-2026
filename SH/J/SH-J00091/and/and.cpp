#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	ll a[n+2];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<a[n/2];
	return 0;
}
