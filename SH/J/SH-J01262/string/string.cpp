#include<bits/stdc++.h>
using namespace std;
long long n,ans;
string a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		long long x;
		char y;
		cin>>x>>y;
		for(int i=0;i<x;i++) a+=y;
	}
	int len=a.size();
	string b;
	for(int i=len-1;i>=len/2;i--)
		b+=a[i];
	for(int i=0;i<=len/2;i++)
		if(a[i]!=b[i]) ans++;
	cout<<ans;
	return 0;
} 
