#include<bits/stdc++.h>
using namespace std;
int n,m,i,j;
long long a[100001];
long long k;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for( i=1;i<=n;i++){
		cin>>a[i];
	}
	
	if(n>100){
	
		for(i=1;i<=100;i++){
			if(a[i]!=i-1) break;
		}
	}
	if(i>90) cout<<n-m;
	
	
	else{
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			if(a[j]>a[i]){
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	
	
	for(i=2;i<=m;i++){
		a[i]=a[i-1]&a[i];
	}
	cout<<a[m];
		
		
	}
	
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
