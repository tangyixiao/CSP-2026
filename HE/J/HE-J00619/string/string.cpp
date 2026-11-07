#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		char a;
		cin>>a;
		while(x--){
			s=s+a;
		}
	}
	int ans=0;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[n-i+1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}

