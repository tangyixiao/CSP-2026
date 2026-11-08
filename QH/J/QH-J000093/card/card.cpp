#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	int a[n];
	int b[m]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		bool flag=0;
		for(int j=i;j<n;j++){
			for(int k=i;k<j;k++){
				if(a[k]==a[j]){
					for(int l=i;l<k;l++){
						b[a[l]-1]++;
					}
					for(int l=j;l<n;l++){
						b[a[l]-1]++;
					}
					flag=1;
				}
			}
			if(j==n-1&&flag==0){
				for(int l=i;l<n;l++){
					b[a[l]-1]++;
				}
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
} 

