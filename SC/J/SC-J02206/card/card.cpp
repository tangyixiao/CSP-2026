#include<bits/stdc++.h>
using namespace std;
long long a[500000],c[500000];
bool b[300000];
long long res[300010];
int main(){
	freopen(card.in,"r",stdin);
	freopen(card.out,"w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			c[j]=a[j];
		}
		for(int j=i;j<n;j++){
			if(c[j]!=0){
				for(int k=j+1;k<n;k++){
					if(c[j]==c[k]&&c[k]!=0){
						for(int l=j+1;l<=k;l++){
							c[l]=0;
						}
					}
				}
			}
		}
		for(int j=i;j<n;j++){
			res[c[j]]++;
		} 
	}
	for(int i=1;i<=m;i++){
		cout<<res[i]<<" ";
	}
	return 0;
}