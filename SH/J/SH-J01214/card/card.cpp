#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+5;
const int maxv=3e5+5;
int n,m,a[maxn],i,ans[maxv],f[maxv],j,k;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			if(f[a[j]]){
				for(k=f[a[j]];k<j;k++){
					f[a[k]]=0;
				}
			}
			f[a[j]]=j;
		}
		for(j=1;j<=m;j++)
		{
			if(f[j])ans[j]++;
		}
		for(j=1;j<=m;j++){
			f[j]=0;
		}
	}
	for(i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}
