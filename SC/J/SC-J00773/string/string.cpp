#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,cnt=0,len=0;
string ans="";
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;char s;
		cin>>x>>s;
		len+=x;
		for(int j=1;j<=x;j++){
			ans+=s;
		}
	}
	string ans2=ans;
	reverse(ans2.begin(),ans2.end());
	for(int i=0;i<(len/2);i++){
		if(ans[i]!=ans2[i]){cnt++;}
	}
	cout<<cnt;
	return 0;
	
}