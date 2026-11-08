#include<bits/stdc++.h>
using namespace std;
int a[5000],b[5000][5000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n,m;
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			b[i][j]=a[j]; 
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=1;k<=b[i][j];k++){
				
			}
		}
	}
	return 0;
}
