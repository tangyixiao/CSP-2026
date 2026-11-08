#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(n<=m){
			ans=(i==1)?a[i]:(ans&a[i]);
		}
		if(ans==0){
			printf("0\n");
			exit(0);
		}
	}
	printf("%d\n",ans);
	return 0;
}
