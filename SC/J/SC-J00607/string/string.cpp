#include<bits/stdc++.h>
using namespace std;
long long n,l,r,cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a;
		char b;
		cin>>a>>b;
		r+=a; 
		while(a--)s+=b;
	}
	r-=1;
	long long m=r/2;
	for(int i=0;i<=m;i++){
		if(s[l]!=s[r])cnt++;
		l++;
		r--;
	}
	cout<<cnt;
	return 0;
} 