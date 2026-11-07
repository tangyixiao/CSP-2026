#include<bits/stdc++.h>
using namespace std;
int a[500005],tong[500005],shu[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(shu[j]==j){
				for(int k=1;k<=j;k++){
					shu[j]=0;
				}
				shu[j]=j;
			}
			shu[j]=j;
		}
		for(int j=1;j<=n;j++){
			tong[shu[j]]++;
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<tong[i]<<" ";
	}
	return 0;
}
