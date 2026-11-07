#include<bits/stdc++.h>
using namespace std;
int a[200100],d[30][200100],f[200100];
void r(int x,int y){
	int t=1;
	while(x){
		if(x%2==1){
			d[t][y]=1;
			d[t][0]++;
		}
		x/=2;
		t++;
	}
}
long long ans=0;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		r(a[i],i);
	}
	for(int i=30;i>=1;i--){
		if(d[i][0]>=m){
			int o=1;
			for(int j=1;j<i;j++) o*=2;
			ans+=o;
			for(int j=1;j<=n;j++){
				if(d[i][j]==0&&f[j]==0){
					f[j]=1;
					for(int k=1;k<=i;k++){
						if(d[k][j]){
							d[k][0]--;
							d[k][j]=0;
						}
					}
				}
			}
		}
	}
	printf("%lld",ans);
	return 0;
}