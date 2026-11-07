#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N]= {};
int f[N][50]= {};
int g[N]={};
int mx=-1;
void pu(int i,int x) {
	int j=0;
	while(x) {
		j++;
		f[i][j]=x%2;
		x/=2;
	}
	g[i]=j;
	mx=max(mx,j);
	return;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		pu(i,a[i]);
	}
	m=n-m;
	int ans=0;
	for(int i=mx; i>=1; i--) {
		int cnt=0;
		for(int j=1; j<=n; j++) {
			if(f[j][i]==0)cnt++;
		}
		if(cnt<=m||cnt==0) {
			m-=cnt;
			for(int j=1; j<=n; j++) {
				if(f[j][i]==0){
					for(int k=1;k<=mx;k++)f[j][k]=1;
				}
			}
			ans=ans*2+1;
		} else ans=ans*2;
	}
	cout<<ans;
	return 0;
}