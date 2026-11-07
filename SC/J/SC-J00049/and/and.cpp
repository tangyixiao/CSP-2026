#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,k[N],a[N];
long long ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(pow(2,k[i])-1!=a[i]) for(int j=1;j<=n;j++) k[i]++;
	}
	for(int i=1;i<=m;i++){
		if(a[i+1]&a[i+2]>=a[i]&a[i+1]) ans=a[i+1]&a[i+2];
	}
	cout<<ans;
	return 0;
}