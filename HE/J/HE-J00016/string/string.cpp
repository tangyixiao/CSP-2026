#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 200005; 
string s;
int n,a[N],len;
char c[N];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	s=" ";
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
		len+=a[i];
	}
	int ans=0;
	for(int i=1;i<=len/2;i++){
		if(s[i]!=s[len+1-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
