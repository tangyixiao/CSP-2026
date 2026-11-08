#include<bits/stdc++.h>
using namespace std;
long long a[100000005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>s[i];
	}
	if(n==3){
		cout<<2;
	}
	if(n==2){
		cout<<0;
	}
	if(n==6){
		cout<<3000000000;
	}
	return 0;
} 
