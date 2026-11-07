#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,m;
int a[20010];
int f[20010][20010];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[i][1]=max(a[i],f[i-1][1]);
	}

	for(int i=1;i<=n;i++){
		for(int j=2;j<=m;j++){
			f[i][j]=max(f[i-1][j],(f[i-1][j-1]&a[i]));
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<f[i][j]<<' ';
		}
		cout<<endl;
	}
	cout<<f[n][m]<<endl;
	fclose(stdin);fclose(stdout);
} 

