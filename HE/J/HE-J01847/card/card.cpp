#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500009];
int b[500009];
int xh[300009];
int z,f=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	
	}
	for(int ju=0;ju<n;ju++)
	for(int i=0;i<n;i++){
		f=0;
		z=ju;
		b[i]=a[z];
		z++;
		for(int j=0;j<n;j++){
		
		if(f==0&&i>=1&&b[i]==b[j]){
			xh[a[z]]++;
			f=1;
			
		}
		if(f==1&&j>i)b[j]=0;
	}
	}
	
	for(int i=0;i<m;i++){
		cout<<xh[i]<<" ";
	}
	return 0;
}
