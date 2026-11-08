#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int n,m,a[100001],sum[100001],a1[100001];
bool b[2000001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n;i>=1;i--){
		for(int j=1;j<=n;j++){
			a1[j]=a[j];
		}
		for(int j=n-i+1;j<=n;j++){
			if(b[a1[j]]==1){
				for(int k=j-1;k>=n-i+1;k--){
					if(a1[k]==a1[j]){
						break;
					}else{
						b[a1[k]]=0;
					}
				}
			}else{
				b[a1[j]]=1;
			}
		}
		
		for(int j=1;j<=n;j++){
			if(b[a1[j]]){
				sum[a1[j]]++;
				b[a1[j]]=0;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
}

