#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define endl '\n'
using namespace std;
const int N=2e5+10;
int n,ans;
string s="";
signed main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i){
		int a;
		string c;
		cin>>a>>c;
		for(int j=1;j<=a;++j)s+=c;
	}
	if(s.size()%2==1){
		for(int i=0;i<s.size()/2+1;++i){
			if(s[i]!=s[s.size()-i-1])ans++;
		}
	}else{
		for(int i=0;i<s.size()/2;++i){
			if(s[i]!=s[s.size()-i-1])ans++;
		}
	}
	cout<<ans;
	return 0;
}