#include <bits/stdc++.h>
using namespace std;
int n,m; 
int b[300005],a[500005];
bool f[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);

	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=1;i<=n;i++){

         for(int j=i;j<=n;j++){
         	f[a[j]]=true;
		 }
        for(int j=1;j<=m;j++){
         	b[j]+=f[j];
         	
		 }
		for(int j=1;j<=m;j++){
         	
         	f[j]=0;
		 }
		
	}
	for(int i=1;i<=m;i++){
		printf("%d ",b[i]);
	}
	return 0;
}
