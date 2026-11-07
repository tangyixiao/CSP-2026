#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char b;
		cin>>a>>b;
		while(a--)s+=b;
	}if((int)(s.size())&1){
		int k=(s.size()+1)>>1,ans=0;
		for(int i=k-2,j=k;i>=0&&j<s.size();i--,j++)if(s[i]!=s[j])ans++;
		cout<<ans;
	}else{
		int k=s.size()>>1,ans=0;
		for(int i=k-1,j=k;i>=0&&j<s.size();i--,j++)if(s[i]!=s[j])ans++;
		cout<<ans;
	}
	return 0;
}