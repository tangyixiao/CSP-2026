#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r","stdin");
	freopen("card.out","w","stdout");
	int n,m;
	cin>>n>>m;
	int a[50005];
	int dc[50005];
	int zl[50005];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int sum=1,sum2=0;
	if(m<=2){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(a[j]==a[i]){
					sum2=j;
				}
				if(j==n){
					for(int k=sum2;k<=n;k++){
						for(int p=1;p<=m;p++){
							if(a[k]==p){
								zl[p]++;
							}
						}
					}
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<zl[i]<<" ";
	}
	return 0;
}