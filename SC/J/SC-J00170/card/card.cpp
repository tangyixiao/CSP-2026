#include<bits/stdc++.h>
using namespace std;
int a[500010],b[500010],c[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		
		scanf("%d",&a[i]) 
	}
	for(int j=1;j<=n;j++){
		memset(c,0,sizeof c);
		for(int i=j;i<=n;i++){
			if(c[a[i]]){
				for(int k=1;k<=m;k++){
					if(c[k]>c[a[i]]&&c[k]<=i){
						c[k]=0;
						b[k]--;
					}
				}
				c[a[i]]=0;
				b[a[i]]--;
			}
			c[a[i]]=i;
			b[a[i]]++;
		}
	}
	
	for(int i=1;i<=m;i++){
		printf("%d ",b[i]);
	}
	return 0;
}