#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],k[200010][30],b[35],bb[35];
bool o[200010];
void f(int i){
	int t=0;
	while(a[i]>0){
		t++;
		k[i][t]=a[i]%2;
		a[i]/=2;
	}
	for(int x=1;x<=30;x++)
		if(k[i][x])b[x]++;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		f(i);
	}
	for(int i=30;i>=1;i--){
		if(b[i]>=m){
			bb[i]=1;
			for(int j=1;j<=n;j++){
				if(!k[j][i] && k[j][i-1])b[i-1]--,k[j][i-1]=0;
			}
		}
	}
	int p=1,ans=0;
	for(int i=1;i<=30;i++){
		if(bb[i])ans+=p;
		p*=2;
	}
	printf("%d",ans);
	return 0;
}