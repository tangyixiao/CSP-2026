//string»ØÎÄ´®
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
int n;
ll ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i){
		int a;char b;
		cin>>a>>b;
		for(int j=1;j<=a;++j){
			s=s+b;
		}
	}
	int l=0,r=s.length()-1;
	while(l<=r){
		if(s[l]!=s[r]){
			ans++;
		}
		l++,r--;
	}
	cout<<ans;
	return 0;
}
