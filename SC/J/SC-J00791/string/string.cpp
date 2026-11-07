#include<bits/stdc++.h>
using namespace std;
#define int long long
int a,n,ans;
char c;
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>a>>c;
		while(a--) s.push_back(c);
	}
	int k=s.size();
	for(int i=0;i<s.size()/2;++i){
		if(s[i]!=s[k-1-i])++ans;
	}
	cout<<ans;
	return 0;
}