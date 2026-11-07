#include <bits/stdc++.h>
using namespace std;
char a[10000000005],w;
int t,d,l=0,c=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>d;
	for(int i=0;i<d;i++){
		cin>>t;
		cin>>w;
		for(int j=0;j<t;j++){
			a[l++]=w; 
		}
	}
	for(int i=0;i<l;i++){
		if(a[i]!=a[l-i-1]){
			a[i]=a[l-i-1];
			c++;
			
		}
	}
	cout<<c;
	return 0; 
}