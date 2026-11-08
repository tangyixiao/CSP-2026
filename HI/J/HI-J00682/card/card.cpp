#include<bits/stdc++.h>

using namespace std;

int a[5000005] , b[3000005] , c[5000005] ,d[3000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n , m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	for(int i=0;i<n;i++){
		a[i] = c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i]!=a[j]){
				int p = a[i];
				a[j-1]=a[j];
				a[n] = p;
			}
			else{
				for(int x=i+1;i<=n;x++){
					a[x]==0;
				}
			}
			if(a[j]==i){
				d[i]++;
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<d[i]<<" ";
	}
	return 0;
} 
