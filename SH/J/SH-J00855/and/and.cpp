#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200005][32];
bool check[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout)
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		check[i]=1;
	    long long x;
	    cin>>x;
	    int w=0;
	    while(x>0){
	    	a[i][w]=(x%2);
	    	x/=2;
	    	w++;
		}
	}
    long long ans=0;
	for(int i=31;i>=0;i--){
		int tj=0;
		for(int j=1;j<=n;j++){
			if(a[j][i]==1 && check[j]){
				tj++;
			}
		}
		if(tj<m) continue;
		if(tj>=m){
			for(int j=1;j<=n;j++){
				if(a[j][i]==0){
					check[j]=0;
				}
			}
			
		}
		
		
		
		
	}
	for(int i=31;i>=0;i--){
		bool flag=1;
		for(int j=1;j<=n;j++){
			if(check[j]){
				if(a[j][i]==0){
					flag=0;
				}
				
			}
		}
		if(flag){
			ans+=1;
		}
		ans*=2;
	}
	cout<<ans/2;
	
	
	
	
}
