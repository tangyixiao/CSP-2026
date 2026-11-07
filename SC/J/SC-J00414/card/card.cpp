#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500010],b[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(long long i=1;i<=n;i++) cin>>a[i];
	long long t=1;
	while(t<=n){
		int c[5][m+1];
		for(int i=1;i<=2;i++){
			for(long long j=1;j<=m;j++) c[i][j]=0;
		}
		for(long long i=t;i<=n;i++){
			if(c[1][a[i]]==1){
				for(long long j=1;j<=m;j++){
					if(c[2][j]>c[2][a[i]]){
						c[1][j]=0;
						c[2][j]=0;
					}
				}
			}
			c[1][a[i]]=1;
			c[2][a[i]]=i;
		}
		for(long long i=1;i<=m;i++){
			if(c[1][i]==1) b[i]++;
		}
		t++;
	}
	for(long long i=1;i<=m;i++) cout<<b[i]<<" ";
	return 0;
}