#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[200000];
	for(int j=0;j<n;j++){
		cin>>a[j];
	}
	int ans[100000]={};
	for(int i=1;i<=n;i++){
		int f=0;
		int zm[200000]={};
		for(int j=i-1;j<n;j++){
			bool b=1;
			for(int k=0;k<f;k++){
				if(a[j]==zm[k]){
					f=k+1;
					for(int l=k+1;l<f;l++){
						zm[l]=0;
					}
					b=0;
				}
			}
			if(b){
				zm[f]=a[j];
				f++;
			}
		}
		for(int o=0;o<f;o++){
			ans[zm[o]]++;
		}
	}
	for(int p=1;p<=m;p++){
		cout<<ans[p]<<' ';
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
