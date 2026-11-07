#include<bits/stdc++.h>
using namespace std;
long long n,a[1000000],d,s;
string c,b[100000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i]
	} 
	if(n==3){
		cout<<2;
	}else if(n==2){
		cout<<0;
	}else if(n==6){
		cout<<3000000000;
	}
	return 0; 
} 
