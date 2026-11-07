#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N],sum[N],ans[N],x,f;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		x=0;
		memset(sum,0,sizeof(sum));
		for(int j=i;j<=n;j++){
			f=0;
			for(int k=1;k<=x;k++){
				if(sum[k]==a[j]&&f==0){
					f=1;
				}
				if(f==1){
					sum[k]=0;
					x--;
				}
			}
			x++;
			sum[x]=a[j];
		}
		for(int j=1;j<=x;j++){
			ans[sum[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}
