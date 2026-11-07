#include<bits/stdc++.h>
using namespace std;
int n,ans=0;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;++i){
		long int x; char s1;
		cin>>x>>s1;
		for(long int j=0;j<x;++j) s+=s1;
	}
	int len=s.size()-1;
	for(int i=0;i<=len;++i,--len){
		if(s[i]!=s[len]) ans++;
	}
	cout<<ans;
	return 0;
} 