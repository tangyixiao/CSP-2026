#include<bits/stdc++.h> 
using namespace std;
#define int long long
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long m=0,d=0,k=0;
	int n,l=0;
	cin>>n;
	char b[n];
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		if(b[i]==b[i-1]){
			l++;
		}else{
			l=0;
		}
		m+=a[i];
	}
	if(l==n-1){
		cout<<"0";
		return 0;
	}
	char c[m];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			c[k+j]=b[i];
		}
		k+=a[i];
	}
	for(int i=1;i<=m/2;i++){
		if(c[i]!=c[m+1-i]) d++;
	}
	cout<<d;
	return 0;
}