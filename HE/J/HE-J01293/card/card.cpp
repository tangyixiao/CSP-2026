#include<bits/stdc++.h>
using namespace std;
bool k[1000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[1000]={0};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int b[1000]={0};
	int k=0;
	for(int i=1;i<=n;i++){
		if(a[i]==0){
			a[i]==1;
			b[i]=a[i];
		}
		else{
			for(int j=1;j<=n;j++){
				if(b[i]==a[i]){
					k=i;
					for(int l=k;j<=n;l++){
						b[l]=0;
					}
				}
				
			}
		}
	} 
	return 0;
} 
