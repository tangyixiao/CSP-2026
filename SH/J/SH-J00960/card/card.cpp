#include<bits/stdc++.h>
using namespace std;
int n,m,a[5000100],a1[5000100],am[3000100];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int x=1;x<=n;x++){
		for(int i=1;i<=n;i++) a1[i]=a[i];
		for(int i=x;i<=n;i++){
			for(int j=x;j<=i;j++){
				if(a1[j]==a1[i] and a1[i]!=0){
					for(int k=j;k<i;k++){
						a1[k]=0;
					}	
				}
			}
		}		
		for(int i=x;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a1[i]==j) am[j]++;
			} 
		}
	}
	for(int i=1;i<=m;i++){
		cout<<am[i]<<" ";
	}
	return 0;
}
