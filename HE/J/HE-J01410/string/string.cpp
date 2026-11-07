#include<bits/stdc++.h>
using namespace std;
int n,a[200005],m,l,k;
char c[200005],h;
string b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		h=c[1];
		if(c[i]==h)k++;
		l+=a[i];
	}
	if(k==n){
		cout<<0;
		return 0;
	}
	b[0]=c[1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			b+=c[i];
		}
	}
	for(int i=0;i<=l;i++){
		if(b[i]!=b[l-i]){
			m++;
			b[i]=b[l-i]; 
		}
	}
	
	cout<<m;
	return 0;
} 

