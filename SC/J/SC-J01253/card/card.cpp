#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen ("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n+1],top=0,f[n+1],ans[m+1];
	bool b[n+1];
	int p[n+1];
	memset(b,0,sizeof(b));
	memset(ans,0,sizeof(ans));
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(b[a[j]]==1){
				while(top>=p[a[j]]){
					b[f[top]]=0;
					top--;
				}	
			}
			f[++top]=a[j];
			b[a[j]]=1;
			p[a[j]]=top;
		}
		while(top>0){
			ans[f[top]]++;
			b[f[top]]=0;
			top--;
		}
	}
	for(int i=1;i<=m;i++)
		printf("%d ",ans[i]);
	return 0;
}