#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[10000005],b[10000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	if((n<=5000&&m<=3000)||(n>=5000&&m<=10000)){
		for(int i=a[1];i<m;i++){
			printf("%d ",i);
		}
		printf("%d",m);
	}
	if(n>=5000&&m<=3000){
		
	}
	return 0;
}