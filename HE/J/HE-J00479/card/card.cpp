#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n,q=0,p,c;
	cin>>m>>n;
	int a[m],b[m];
	for(int i=0;i<m;i++){
		cin>>a[i];
		b[i]=0;
	}
	for(int g=0;g<m;g++){
		for(int i=m;i>g;i--){
		for(int j=g;i<m;j++){
			if(a[j]==a[i]){
				
				c=j;
				j=i;
				for(int z=1;z<=n;z++){
					for(int r=0;r<c;r++){
						if(a[r]==z){
						b[z]++;
					}
					}
					for(int u=i;u<m;u++){
						if(a[u]==z){
						b[z]++;
					}
					}
				}
				break;
				q=1;
			}
			
				
		}
		if(q==1){
			break;
		}
		
	}
	}
	for(int i=1;i<=n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
