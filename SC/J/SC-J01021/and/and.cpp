#include<bits/stdc++.h>
using namespace std;
long long a[200100][40],m,n,g,g1=1,f[200100],ans;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		cin>>a[i][0];
		long long c=0,d=a[i][0];
		while(d!=0){
			c++;
			a[i][c]=d%2;
			d=d/2;
		}
		g=max(g,c);
	}
	for(int i=1;i<g;i++){
		g1=g1*2;
	}
	for(int i=g;i>=1;i--){
		long long c=0;
		for(int j=1;j<=m;j++){
			if(f[j]==0&&a[j][i]==1){
				c++;
			}
		}
		if(c>=n){
			ans+=g1;
			for(int j=1;j<=m;j++){
				if(f[j]==0&&a[j][i]==0){
					f[j]=1;
				}
			}
		}
		g1=g1/2;
	}
	cout<<ans;
	return 0;
}