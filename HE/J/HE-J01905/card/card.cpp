#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500001];
int f[500001];
int b[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++)cin>>a[i];
	for(int i = 1;i<=m;i++){
		memset(f,0,sizeof f);
		for(int j =i;j<=n;j++){
			for(int k=j;k>=1;k--){
				if(f[k]==a[j]){
					for(int l=k;l<=j;l++){
						f[l]=0;
					}
				}
			}
			f[j]=a[j];
		}
		for(int j = 1;j<=n;j++){
			if(f[j]!=0)b[f[j]++];
		}
	}
	for(int i = 1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
