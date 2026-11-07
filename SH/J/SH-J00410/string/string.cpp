#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int a[100001];
	char b[100001];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	if(n==1) cout<<0;
	else if(n==2){
		if(b[1]==b[2]) cout<<0;
		else if(a[1]<a[2]) cout<<a[1];
		else cout<<a[2];
	}
	else cout<<0;
	return 0;
} 
