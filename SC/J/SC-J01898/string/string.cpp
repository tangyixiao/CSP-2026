#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[200100];
	char c[200100],s[917813];
	long long k=0;
	int ans=0;
	a[0]=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		k+=a[i];
	}
	if(n=1){	
		cout<<0;
		return 0;
	}
	return 0;
} 