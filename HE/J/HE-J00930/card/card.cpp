#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	int a[10001];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=1;j<=i;j++){
			if(a[i]==a[j]){
				a[i]=a[j];
			}
		}
	}
	
	
	
	
	
	return 0;
} 
