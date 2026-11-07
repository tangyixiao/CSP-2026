#include<bits/stdc++.h>
using namespace std;
int a[1000000];int sum[1000000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		cin>>a[i];		
	}
	
	for(int j=0;j<m;j++){
	for(int i=j;i<n;i++){
		for(int l=0;l<i;l++){
				if(a[i+1]==a[l]){
					for(int k=l;k<i;k++){
						int c=i+1;
						a[k]=a[c];a[c]=0;
						c++; 
					}
				}
			}//cout<<a[1];
			for(int l=1;l<=m;l++){
				if(a[l]!=0||a[0]==l){
					sum[l]++;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<sum[i]<<" ";
	}
}
