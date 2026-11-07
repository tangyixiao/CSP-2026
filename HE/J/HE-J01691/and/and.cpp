#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ma=0,o,q;
	cin>>n>>m;
	int a[n],u[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++){
		
		if(a[i]>ma){
			
			ma=a[i];
			u[i]=1;
			o=i;
			
		}
	}
	q=a[o/2];
	for(int i=2;i<=m;i++){
		
		cout<<endl;
		for(int j=1;j<=n;j++){
			//cout<<a[j]<<" "<<ma<<" "<<q<<" "<<q&ma<<endl;
			if(a[j]&ma>ma&q && u[j]==0){
				u[o]=0;
				q=a[j];
				u[j]==1;
				o=j;
			}
			
		}
		ma=ma&q;
	}
	ma=ma&q;
	cout<<ma;
	
	
	
	
	return 0;
} 
