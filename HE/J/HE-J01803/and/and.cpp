#include<bits/stdc++.h>
using namespace std;
int a[200005][8];
int b[200005][8];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	int n,m;
	int c[114514];
	cin>>n>>m;
	for(int i=0;i<=n*n;i++){
		for(int j=0;j<8;j++){
			a[i][j]=0;
			b[i][j]=0;
		}
		c[i]=0;
	}
	for(int i=0;i<n;i++){
		int v;
		cin>>v;
		int j=0;
		while(v){
			a[i][j]=v%2;
			v/=2;
			j++;
		}
	}
	if(m==2){
		for(int i=0;i<n;i++){
			for(int j=n-1;j>i;j--){
				for(int k=0;k<8;k++){
					if(a[i][k]&&a[j][k]) b[j][k]=1;
				}
			}
		}
	} 
	cout<<"ÎÒÒÑ¼²¿à"; 
} 
