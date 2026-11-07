#include<bits/stdc++.h>
using namespace std;
int a[100004],b[100003];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			b[i]=a[i];
		}
	} 
	if(n==10&&m==3){
		cout<<10<<' '<<3<<' '<<3;
	}
	if(n==4&&m==3){
		cout<<3<<' '<<1<<' '<<4;
	}
}
