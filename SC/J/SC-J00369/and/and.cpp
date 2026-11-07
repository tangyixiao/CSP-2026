#include<bits\stdc++.h>
using namespace std;
int n,m,a[2][200005],ans,l,a1,a2;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%d",&a[0][i]);
	for(int i=1;i<m;i++){
		ans=0;
		for(int j=1;j<=n-i;j++){
			for(int q=j+1;q<=n-i+1;q++){
				int c=a[l][j]&a[l][q];
				if(ans<c){
					ans=c;
					a1=j;
					a2=q;
				}
			}
		}
		
		int l1=l,d=0;
		l=(l+1)%2;
		for(int j=1;j<=n-i;j++){
			if(j==a1) {
				d++;
				j++;
			}
			if(j==a2) {
				d++;
				j++;
			}
			a[l][j-d]=a[l1][j];
		}
		a[l][n-i]=ans;
	}
	printf("%d",ans);
	return 0;
}