#include<bits/stdc++.h>
using namespace std;
int n;
int a[20005];
char c[20005];
char b[20005];
long long z=1;
int main(){
	freopen("string,in","r",stdin);
	freopen("string,out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=z;j<=a[i]+z;j++){
			b[j]=c[i];
		}
		z=z+a[i];
	}
	int g=z-1;
	int d=0;
	int s=0;
	int l=1;
	if(g%2!=0){
		s=2;
		l=0;
	}
	for(int i=g/2+l;i<=z;i++){
		if(b[i]!=b[z/2-s]){
			d++;
		}
		s++;
	}
	cout<<d;
	return 0;
} 
