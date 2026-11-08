#include<bits/stdc++.h>
using namespace std;

const int N=5e5+5;

int a[N],f[N],x[N]; 

int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m,l=1;
	cin>>n>>m;
	
	for (int i=1;i<=n;i++) cin>>a[i];
	
	for (int i=1;i<=n;i++){
		
		int j=i;
		
		while (j<=n){
			
			f[a[j]]++;
			
			int t=n;
			
			while (t>j){
				
				if (a[t]==a[j]) {
					
					j=t;
					break;
					
				}
				
				t--;
				
			}
			
			j++;
			
		}

		
		
	}
	
	for (int i=1;i<=m;i++) cout<<f[i]<<" ";
	
	return 0;
	
} 
