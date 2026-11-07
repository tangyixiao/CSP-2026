#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int a[N],b[N],t[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		memset(b,0,sizeof b);
		for(int j=i;j<=n;j++){
			if(b[a[i]]>0){
				for(int k=j;k>=1;k--) b[a[k]]=0;
			}
			b[a[i]]++;
		}
		for(int l=1;l<=m;l++){
			if(b[a[l]]>0) t[a[l]]++;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",t[a[i]]);
	}
	return 0;
}