#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int i,j,k,n,m,a[100],b[100];
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]==a[j]){
				for(k=i+1;k<=j;k++){
					a[k]=0;
					if(a[k]==0)
					k--;
				}
				
			}
			if(a[i]!=a[j]){
				b[i]++;
			}
		}
	}
	for(i=0;i<m;i++){
		cout<<b[i];
	}
	return 0;
}
