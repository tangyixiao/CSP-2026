#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+5;
int n,a[maxn],ans,cnt;
char c[maxn];
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		while(a[i]--){
			s=s+c[i];
		}
	}
	for(int i=0;i<s.size();i++){
		int j=s.size()-1-i;
		if(s[i]!=s[j]){
			ans++;
			s[i]=s[j];
		}
	}
	cout<<ans;
	return 0;
}