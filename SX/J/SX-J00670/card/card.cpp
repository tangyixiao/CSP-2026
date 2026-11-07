#include<bits/stdc++.h>
using namespace std;
int n,m,cnt,a[500010],b[300010],c[500010],ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) b[j]=0;
		for(int j=1;j<=n;j++) c[j]=0;
		cnt=0;
		for(int j=i;j<=n;j++){
			c[++cnt]=a[j];
			if(b[a[j]]) for(int k=b[a[j]];k<=cnt-1;k++) b[c[k]]=0;
			b[a[j]]=cnt;
		}
		for(int j=1;j<=m;j++)
			if(b[j]) ans[j]++;
	}
	for(int j=1;j<=m;j++) cout<<ans[j]<<" ";
	return 0;
}