#include<bits/stdc++.h>
#define int long long
using namespace std;
int x[200005];
int dp[2005][2005];
int z[10000];
int y[200005];
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int maxx=0;
	for(int i=1; i<=n; i++) {
		cin>>x[i];
		maxx=max(maxx,x[i]);
		y[x[i]]++;
	}
	if(n<=20) {
		int k=1;
		for(int i=1; i<=n; i++) {
			k*=2;
		}
		int maxx1=0;
		for(int i=1; i<=k-1; i++) {
			z[1]++;
			for(int i=1; i<=n; i++) {
				if(z[i]>=2) {
					z[i+1]++;
					z[i]=0;
				}
			}
			int h=0;
			int sum=0;
			for(int i=1;i<=n;i++){
				if(z[i]==1){
					if(h==0){
						sum=x[i];
					}
					h++;
					sum&=x[i];
				}
			}
			if(h==m){
				maxx1=max(maxx1,sum);
			}
		}
		cout<<maxx1;
	}else if(maxx<=4){
		if(y[4]>=m){
			cout<<4;
		}else if(y[4]+y[3]>=m){
			cout<<3;
		}else if(y[4]+y[3]+y[2]>=m){
			cout<<2;
		}else{
			cout<<1;
		}
	}else{
		if(m==1){
			cout<<maxx;
		}else if(m==2){
			int maxx1=0;
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					maxx1=max(maxx1,x[i]&x[j]);
				}
			}
			cout<<maxx1;
		}
	}
	return 0;
}