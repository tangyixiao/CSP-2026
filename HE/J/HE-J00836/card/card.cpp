#include<bits/stdc++.h>
using namespace std;
const long long maxn=5e5+10;
int n,a[maxn],m,b[maxn],ans[300005],f[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int t=1;t<=n;t++){
		memset(f,0,sizeof(f));
		for(int i=t;i<=n;i++){
			for(int j=t;j<i;j++)if(b[j]==a[i])for(int k=j;k<i;k++)b[k]=-1;
			b[i]=a[i];
		}
		for(int i=t;i<=n;i++){
			for(int j=1;j<=m;j++)if(b[i]==j&&!f[j])ans[j]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
/*freopenÈ¥×¢ÊÍ!!!!!!!!!!!*/
/*Õô£¡*/
//3 1 4
