#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005],ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(b[a[j]]) memset(b,0,sizeof(b));
			b[a[j]]=1;
		}
		for(int j=i;j<=m;j++){
			if(b[a[j]]){
				ans[a[j]]++;
				b[a[j]]=0;
			}
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d%c",ans[i],' ');
	}
	return 0;
}