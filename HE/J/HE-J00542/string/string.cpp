#include<bits/stdc++.h>
using namespace std;
#define int long long
string s;
int read(){
	int n;cin>>n;
	for(int i=0;i<n;++i){
		int n;cin>>n;
		char op;cin>>op;
		for(int i=0;i<n;++i) s+=op;
	}return n;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n=read();
	int l=0,r=s.size()-1,ans=0;
	while(l<r){
		if(s[l]!=s[r]){
			ans++;
		}
		l++;
		r--;
	}cout<<ans;
	return 0;
}
