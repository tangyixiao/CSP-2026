#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[1001];
	for(int i=1;i<=n;i++)cin>>a[i];
	int cnt[1001]={};
	for(int k=1;k<=n;k++){
		int b[1001]={};	
		for(int i=k;i<=n;i++){
			for(int j=1;j<=i-1;j++){
				if(b[j]==a[i]){
					for(int l=j+1;l<=i;l++){
						if(b[l]!=0){
							b[l]=b[j]=0;
							break;
						}
					}
				}
			}		
			b[i]=a[i];
		}
		for(int i=1;i<=n;i++){
			cnt[b[i]]++;
		} 
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<" ";
	return 0;
}

