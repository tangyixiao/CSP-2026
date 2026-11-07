#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r","std.in");
	freopen("card.out","w","std.out");
	int n,m;
	cin>>n>>m;
	int x[n+1];
	int y[n+1]={0};
	int z[m+1]={0};
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	for(int i=1;i<=n;i++){
		y[i]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(y[i]!=0){
				if(x[i]==x[j]){
					for(int l=i;l<j;l++){
						y[l]=0;
					}
					break;
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(y[i]){
				z[x[i]]++;
			} 
		}
		for(int i=1;i<=n;i++){
			y[i]=1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<z[i]<<" ";
	}
	return 0;
}