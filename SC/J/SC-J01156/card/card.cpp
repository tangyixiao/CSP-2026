#include<bits/stdc++.h>
using namespace std;
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int y=0;y<n;y++){
		int kp[m+1]={0};
		int cmp=0;
		for(int k=y;k<n;k++){
			kp[cmp]=a[k];
			cmp++;
			for(int i=cmp-2;i>=0;i--){
				if(kp[i]==kp[cmp-1]){
					cmp=i+1;
					break;
				}
			}
		}
		for(int i=0;i<cmp;i++){
			ans[kp[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
} 