#include<bits/stdc++.h>
using namespace std;
char a[10000001],b;
int tp[27];
int c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long int t,s=0,n=1;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>c>>b;
		for(long long int j=n;j<=n+c;j++){
			a[j]=b;
		}
		n+=c;
	}
	for(long long int i=1;i<=n/2;i++){
		if(a[i]!=a[n-i]){
			s++;
		}
	}
	cout<<s;
	return 0;
} 
