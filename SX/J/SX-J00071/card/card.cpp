#include <iostream>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n];
	int a2[n],a3[n];
	char z;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		scanf("%c",&z);
		a2[i]=0;
	}
	int a1[n]={0};
	int top=0;
	bool j=1;
	int ans[m]={0};
	for(int i=0;i<n;i++){
		for(int j=i;j<=n;j++){
			if(a2[j]==1){
				top=a3[j];
			}
			else{
				a3[j]=top;
			}
			a1[top]=a[j];
			top++;
		}
		int v=0;
		while(1){
			if(a1[v]==top)break;
			ans[a1[v]]++;
			v++;
		}
		top=0;
	}
	for(int i=0;i<m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}