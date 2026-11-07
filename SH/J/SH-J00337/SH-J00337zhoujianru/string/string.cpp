#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a,ans,l;
char b;
string s;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		for(int i=0;i<a;i++){
			s+=b;
		}
		l+=a;
	}
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-1-i])ans++;
	}
	cout<<ans;
	return 0;
}
