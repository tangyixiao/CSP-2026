#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,L,ans;string str;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	while(n--){
		int a;
		char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++) str+=c;
	}
	L=str.size()-1;
	for(int i=0;i<=str.size()/2;i++){
		if(str[i]!=str[L-i]) ans++;
	}
	cout<<ans<<'\n';
	return 0;
}