#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int n;
string s;


int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i){
		int a;
		char x;
		cin>>a>>x;
		for(int j=1;j<=a;++j) s.push_back(x);
	}
//	cout<<s<<"\n";
	s=" "+s;
	int len=s.size();
	int ans=0;
	for(int i=1;i<=len/2;++i){
		if(s[i]!=s[len-i]) ++ans;
//		cout<<i<<" : "<<len-i<<"\n";
	}
	cout<<ans;
}