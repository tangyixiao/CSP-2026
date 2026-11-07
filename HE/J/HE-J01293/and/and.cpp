#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[1000]={0};
	int b[1000]={0};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==2){
		
	}
	int x=1,z=1,d=0,e=0,f=0,g=1,k=0;
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n-i;j++){
				b[g]=a[i] and a[i+1];
			}
			
		}
		int y=b[1];
	for(int i=1;i<=g;i++){
		if(b[i]<b[i+1]){
			y=b[i+1];
		}
	}
	cout<<y;
	return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=2;j<=n-i;j++){
			b[g]=(a[i] and a[j]);
			g++;
		}
	}
	int y=b[1];
	for(int i=1;i<=g;i++){
		if(b[i]<b[i+1]){
			y=b[i+1];
		}
	}
	cout<<y;
	return 0;
} 
