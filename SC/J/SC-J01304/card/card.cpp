#include<bits/stdc++.h>
using namespace std;
int a[500100],f[500100],d[300100];
long long ans[300100];
int main(){
	int n,m,t=1,s=-1;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i]<s) t=0;
		s=a[i];
	}
	if(t){
		int y=0;
		for(int i=1;i<=n;i++){
			if(a[i]!=y){
				ans[a[i]]+=ans[y];
				y=a[i];
			}
			ans[a[i]]++;
		}
	}
	else{
		for(int i=n;i>=1;i--){
			if(d[a[i]]==0){
				d[a[i]]=i;
			}
			else{
				f[i]=d[a[i]];
				d[a[i]]=i;
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(f[j]) j=f[j]-1;
				else ans[a[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		printf("%lld ",ans[i]);
	}
	return 0;
}