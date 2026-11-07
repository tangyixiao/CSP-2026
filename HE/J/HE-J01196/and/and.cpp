#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a[200005],zd=0,zdd;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		zdd=max(zdd,a[i]);
	}
	if(m==n){
		cout<<zdd;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			zd=max(zd,a[i]^a[j]);
		}
	}
	cout<<zd;
	return 0;
		

} 
