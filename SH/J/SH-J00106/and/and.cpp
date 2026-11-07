#include<cstdio>
using namespace std;
int A[200005],N[35];
int ans=(1<<30)-1;
bool choose[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		choose[i]=1;
		scanf("%d",&A[i]);
	}
	int x=1;
	for(int i=0;i<=29;i++){
		N[i]=x;
		x*=2;
	}
	for(int i=29;i>=0;i--){
		x=0;
		for(int j=1;j<=n;j++){
			if(choose[j]&&(A[j]&N[i])>0){
				x++;
			}
		}
		if(x>=m){
			for(int j=1;j<=n;j++){
				if((A[j]&N[i])==0){
					choose[j]=0;
				}
			}
		}
		else{
			ans-=N[i];
		}
	}
	printf("%d",ans);
	return 0;
}
