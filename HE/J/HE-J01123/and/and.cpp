#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[100000]={};
	int b[100000]={};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int maxi=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int c=a[i];
			for(int w=1;w<=m-1;w++){
				c=c&a[j+w];
			}
			if(c>maxi)
			maxi=c;
		}	
	}
	cout<<maxi;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
