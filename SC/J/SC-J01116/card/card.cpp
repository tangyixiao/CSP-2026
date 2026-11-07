#include<bits/stdc++.h>
using namespace std;
long long int a[500005],jpq[300005],cx[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=m;i++){
			jpq[i]=0;
		}
		for(int i=k;i<=n;i++){
			if(jpq[a[i]]==0){
				jpq[a[i]]=i;
			}else{
				
				for(int j=jpq[a[i]]+1;j<i;j++){
					jpq[a[j]]=0;
				}
				jpq[a[i]]=i;
			}
		}
		for(int i=1;i<=m;i++){
			if(jpq[i]!=0){
				cx[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cx[i]<<" ";
	}
	return 0; 
}