#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],b[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]==a[j]&&a[i+1]!=a[j]){
				a[i]=a[i+1]=0;
			}
			else{
				a[i]=0;
			}
		}
		for(int k=1;k<n;k++){
			for(int j=1;j<=m;j++){
				if(a[k]==j){
					b[j]+=1;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	fclose(stdin);
	fclose(stdin);
	return 0;
}
