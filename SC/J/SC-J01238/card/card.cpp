#include<bits/stdc++.h>
using namespace std;
int a[500005],table[500005],n,m,ans[300005],rear,pos;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		rear=0;
		for(int j=i;j<=n;j++){
			bool flag=false;
			if(rear>=1){
				for(int k=1;k<=rear;k++){
					if(table[k]==a[j]){
						flag=true;
						break;
					}
				}
			}
			if(flag!=true){
				rear++;
				table[rear]=a[j];
				a[j]=0;
			}
			else{
				for(int k=pos;k<=rear;k++){
					table[k]=0;
				}
				rear=pos;
				table[rear]=a[j];
				a[j]=0;
			}
		}
		for(int j=1;j<=rear;j++){
			ans[table[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}
