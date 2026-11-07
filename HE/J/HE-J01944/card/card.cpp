#include<bits/stdc++.h>
using namespace std;
int a[500005];
int b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
	}
	long long p=1;
	for(int k=1;k<=n;k++){
		for(int i=k;i<=n;i++){
			b[i]=a[i];
			for(int j=i-1;j>=1;j--){
				if(b[j]==b[i]){
					for(int z=1;z<=j;z++){
						if(z-i<=0){
							b[z]=0;
						}
						else{
							b[z-i]=b[z];
						}
					}
					
				}
			}
			
	}
    for(int i=1;i<=m;i++){
    	cout<<b[i];
	}
		
	}
	
	return 0;
}
