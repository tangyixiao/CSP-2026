#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	int sum[m]={0},k[m+1]={0};
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			a[j-i]=b[j];
			sum[b[j]]++;
			if(sum[b[j]]>1){
				sum[b[j]]=1;
				for(int ii=0;ii<n;ii++){
					if(a[ii]==b[j]){
						for(int s=ii+1;s<n;s++){
							a[s]=0;
						}
						break;
					}
				}
				
			}
		}
		for(int j=0;j<n;j++){
			k[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<k[i]<<' ';
	}
	return 0;
}