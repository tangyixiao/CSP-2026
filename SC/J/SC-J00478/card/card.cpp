#include<bits/stdc++.h>
using namespace std;

int n,m,a[500010],ans[300010];
int p[500010],l,r;
int v[300010];
bool s[500010],fa=1;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(i>1){
			if(a[i]<a[i-1])
				fa=0;
		}
	}
	memset(ans,0,sizeof(ans));
	if(fa){
		a[n+1]=1999999;
		for(int i=2;i<=n+1;i++){
			if(a[i]>a[i-1]){
				ans[a[i-1]]=i-1;
			} 
		}
		printf("%d",ans[1]);
		for(int i=2;i<=m;i++){
			printf(" %d",ans[i]);
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		l=1,r=0;
		memset(p,0,sizeof(p));
		memset(v,0,sizeof(v));
		memset(s,0,sizeof(s));
		for(int j=i;j<=n;j++){
			if(v[a[j]]==0){
				r++;
				p[r]=a[j];
				v[a[j]]=r;
				s[r]=1;
			}else{
				int tmp=v[a[j]];
				for(int k=tmp;k<=r;k++){
					s[k]=0;
					v[p[k]]=0;
				}
				r++;
				p[r]=a[j];
				v[a[j]]=r;
				s[r]=1;
			}
		}
		for(int i=1;i<=r;i++){
			if(s[i]){
				ans[p[i]]++;
			}
		}
	}
	printf("%d",ans[1]);
	for(int i=2;i<=m;i++){
		printf(" %d",ans[i]);
	}
	return 0;
}