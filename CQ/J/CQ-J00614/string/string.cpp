#include<bits/stdc++.h>
using namespace std;
namespace melk{
	typedef long long ll;
	void solve(){
		int n;
		string s="";
		cin>>n;
		for(int i=1;i<=n;i++){
			int a;
			char c;
			cin>>a>>c;
			for(int i=1;i<=a;i++){
				s=s+c;
			}
		}
		ll len=s.size(),ans=0;
		s=" "+s;
		for(ll i=1;i<=len/2;i++){
			if(s[i]!=s[len+1-i]){
				ans++;
			}
		}
		cout<<ans;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	melk::solve();
	return 0;
}
