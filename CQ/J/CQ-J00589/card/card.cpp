#include<bits/stdc++.h>
using namespace std;
int n,m,x,zm[500005],a[500005],dj=1,tj[300005];
bool pd(int dx[500005],int sw){
	for(int i=1;a[i]!=0;i++){
		if(dx[i]==sw){
			return 0;
		}
	}
	return 1;
}
void qc(int dx){
	for(int i=1;zm[i]!=0;i++){
		if(zm[i]==dx){
			dj=i;
			for(int j=i;zm[j]!=0;j++){
				zm[j]=0;
			}
		}
	}
}
void qq(){
	for(int i=1;zm[i]!=0;i++){
		tj[zm[i]]++;
		zm[i]=0;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(pd(zm,a[j])==1){
				zm[dj]=a[j];
				dj++;
			}else{
				qc(a[j]);
				zm[dj]=a[j];
				dj++;
			}
		}
		qq();
		dj=1;
	}
	for(int i=1;i<=m;i++){
		printf("%d ",tj[i]);
	}
	return 0;
}
