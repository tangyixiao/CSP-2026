#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+100;
int n,a[N],len,ans;
string s;
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	if(len>=1e8)return 0;
	s=" ";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s.push_back(c[i]);
		}
	}
	for(int i=1;i<=len/2;i++){
		if(s[i]!=s[len-i+1])ans++;
	}
	cout<<ans;
	return 0;
}
