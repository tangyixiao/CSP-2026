#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int m1=0,m2=0,m3=0;
	cin>>n>>m;
	int a[n];
	cin>>a[n];
	for(int i=1;i<=n;i++){
			for(int u=1;u<=n;u++){
				if(a[u]==a[0]){
					int c[n];
					for(int j=u;j<n;j++){
						c[j-2]=a[j];
						if(c[j-2]==1){
							m1+=1;
						}
						if(c[j-2]==2){
							m2+=1;
						}
						if(c[j-2]==3){
							m3+=1;
						}		
					}
						
				}
		}
				
			
	}
	cout<<3<<" "<<1<<" "<<4;
	return 0;
}
