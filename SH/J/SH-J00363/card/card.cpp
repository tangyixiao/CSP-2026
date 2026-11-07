#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],put[300005];
int rest[200005];
int main(){
	freopen("card.in","r",stdout);
	freopen("card.out","w",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int k;
	
	for(int i=1;i<=n;i++){
		k=1;
		while(put[k]!=0){
			put[k]=0;
			k++;
		} 
		for(int j=i;j<=n;j++){
			k=1;
			while(put[k]!=0){
				if(put[k]==a[j]){
					int k1=k;
					while(put[k1]!=0){
						put[k1]=0;
						k1++;
					} 
				}
				k++;
			}
			put[k]=a[j];
		}
		
		for(int j=1;j<=m;j++){
			k=1; 
			while(put[k]!=0){
				if(put[k]==j){
					rest[j]++;
					break;
				}
			}
		}
		
	
	}
	for(int i=1;i<=m;i++){
		cout<<rest[i]<<" ";
	}
	return 0;
}
