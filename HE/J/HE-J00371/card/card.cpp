#include<bits/stdc++.h>
using namespace std;
int n,m,a[500050];
int q[500050],t=1,w=0;
int xy[300050];
int ans[300050];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	memset(ans,0,sizeof(ans));
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}

	for(int i = 1;i <= n;i++){
		//memset(q,0,sizeof(q));
		w=0;
		for(int j = 1;j <= m;j++) xy[m]=0;
		for(int j = i;j <=n;j++){
			if(xy[a[j]]!=0){
				w=xy[a[j]];
			}else{
				w++;
				q[w]=a[j];
				xy[a[j]]=w;
			}
		}
//		for(int j = 1;j <=w;j++){
//			printf("%d ",q[j]);
//		}printf("\n");
		for(int j = 1;j <= m;j++){
			for(int k = 1;k <= w;k++){
				if(q[k]==j){
					ans[j]++;//	printf("\njia%d\n",j);
				} 
			
			}
		}

	}
	for(int i = 1;i <= m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}
