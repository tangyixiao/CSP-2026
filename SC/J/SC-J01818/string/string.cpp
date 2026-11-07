#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long m=0,ans=0;
	long long a[222222];
	char c[222222];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	string b,d;                                                        
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			b[m+j-1]=c[i];
		}
		m+=a[i];
	}
	for(int i=0;i<=m;i++){
		d[i]=b[m-1-i];
		if(d[i]!=b[i]) ans++;
	}
	cout<<ans/2;
	return 0;
} 