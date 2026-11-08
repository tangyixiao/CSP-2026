#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[10000000];
int u=0;
int er(int n,int m){
	int b[100000]={0},c[100000]={0},d[100000]={0};
	int i=0;
	while(n!=0){
		b[i]=n%2;
		n=n/2;
		i++;
	}
	int k=0;
	while(m!=0){
		c[k]=m%2;
		m=m/2;
		k++;
	}
	int cnt=max(i,k);
	reverse(b,b+cnt);
	reverse(c,c+cnt);
	int p=0;
	while(cnt--){
		d[p]=b[p]&&c[p]; 
	}
	int h=0;
	for(int i=cnt;i>=0;i--){
		u=d[h]*(2<<cnt);
	}
	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];

	}
	ll ans=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ll o=er(a[i],a[j]);
			ans=max(ans,o);
		}
	}
	cout<<ans;
	return 0;
}
