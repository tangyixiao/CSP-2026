#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int b[300010];
int c[300010];
int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			b[j]=0;
		}
		for(int j=i; j<=n; j++){
			if(b[a[j]]!=0){
				for(int k=a[j]; k<=m; k++){
					b[a[k]]=0;
				}
				b[a[j]]++;
			}else{
				b[a[j]]++;
			}
		}
		for(int j=1; j<=m; j++){
			if(b[j]) c[a[j]]++;
		}
	}
	for(int i=1; i<=m; i++){
		cout<<c[i]<<" ";
	}
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
} 
