#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	string s,S;
	cin>>n;
	S+=' ';
	while(n--){
		cin>>a>>s;
		while(a--)S+=s;
	}
	int l=S.size(),ans=0;
	for(int i=1;i<=l/2;i++){
		if(S[i]!=S[l-i])++ans;
	}
    cout<<ans;
	return 0;
}