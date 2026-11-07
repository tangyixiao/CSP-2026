#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	string s;
	for(int i=0;i<n;++i){
		int u;char v;
		cin>>u>>v;
		for(int j=0;j<u;++j) s+=v;
	}
	int len=s.size(),ans=0;
	if(len%2){
		int idx=len/2;
		for(int i=0;i<idx;++i){
			if(s[i]!=s[len-i-1]) ++ans;
		}
	}
	else{
		int sidx=len/2-1,bidx=len/2;
		for(int i=0;i<=sidx;++i){
			if(s[i]!=s[len-i-1]) ++ans;
		}
	}
	cout<<ans;
	return 0;
}
