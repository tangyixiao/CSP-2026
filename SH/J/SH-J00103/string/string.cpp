#include<bits/stdc++.h>
using namespace std;
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	int m=0;
	cin>>m;
	int a[170005];
	string b[170005];
	string c;
	string d;
	for(int i=0;i<m;i++){
	
		cin>>a[i]>>b[i];}
	for(int i=0;i<m;i++){
		for(int j=0;j<a[i];j++){
			c+=b[i];
		}
	}

	for(int i=0;i<100;i++){
		d[i]=c[i];
		cout<<c[i+1];
		
	}
		
	
	return 0; 
} 

