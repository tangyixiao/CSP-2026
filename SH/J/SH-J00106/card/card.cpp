#include<cstdio>
using namespace std;
int A[500005],M[300005],ans[300005],cd[500005][2];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,x;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&A[i]);
	}
	cd[n][1]=A[n];
	for(int i=n;i>0;i--){
		x=M[A[i]];
		if(x){
			cd[i][0]=cd[x][0];
			cd[i][1]=cd[x][1];
		}
		else{
			cd[i][0]=i+1;
			cd[i][1]=A[i];
		}
		for(int j=i;j!=0;j=cd[j][0]){
			ans[cd[j][1]]++;
		}
		M[A[i]]=i;
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}
