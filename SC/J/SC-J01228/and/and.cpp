#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],b[200010],ans,d[32];
bool c[200010][32],e[200010];
void cr(int i){
	for(int j=1;a[i]>=1;j++){
		c[i][j]=(bool)(a[i]%2);
		a[i]/=2;
		b[i]=j;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cr(i);
	}
	d[0]=1;
	for(int i=1;i<=30;i++){
		d[i]=d[i-1]*2;
	}
	for(int i=1;i<=n;i++)e[i]=1;
	for(int i=31;i>=1;i--){
		int o=0;
		for(int j=1;j<=n;j++){
			if(c[j][i]&&e[j]){
				o++;
			}
		}
		if(o>=m){
			ans+=d[i-1];
			for(int j=1;j<=n;j++){
				if(c[j][i]&&e[j]){
					e[j]=1;
				}
				else e[j]=0;
			}
		}
	}
	cout<<ans;
	return 0;
}
	
