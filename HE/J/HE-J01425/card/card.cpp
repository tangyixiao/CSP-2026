#include<bits/stdc++.h>
using namespace std;
long long n,m,a[511111],ans[511111],b[511111];
int main(){
	freopen("card.in","r+",stdin);
	freopen("card.out","r+",stdout); 
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		b[511111]={};
		for(long long j=i;j<=n;j++){
			for(long long k=i;k<j;k++){
				if(a[j]==b[k]){
					for(long long l=k;l<j;l++){
						b[l]=0;
					}
					break;
				}
			}
			b[j]=a[j];
		}
		for(long long j=i;j<=n;j++){
			ans[b[j]]++; 
		}
	}
	for(long long i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
