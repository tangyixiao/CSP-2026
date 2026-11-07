#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=1;i<=4;i++){
		cin>>a[i]; 
	}
	int b[n][n];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			b[i][j]=a[j];
		}
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			b[i][j]=b[i][j+1];
		}
		b[i][n-i]=0;
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
} 