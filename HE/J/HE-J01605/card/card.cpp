#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[500005],b[500005],all[500005];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0+i;j<n;j++){
			for(int k=0+i;k<n;k++){
				if(b[k]==a[j]){
					for(int t=k;t<n;t++){
						b[k]==0;
					}
				}
			}
			b[j]=a[j];
		}
		for(int j=0+i;j<n;j++){
			all[b[j]]++;
		}
	}
	for(int j=0;j<m;j++){
		printf("%d ",all[j]);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
