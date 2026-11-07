#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;string str;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int len=0;
	for(int i=1;i<=n;i++){
		int c;char a;
		cin>>c;
		cin>>a;
		len+=c;
		for(int j=1;j<=c;j++){
			str+=a;
		}
	}
	int ans=0;
	for(int i=0;i<len;i++){
		if(i>len-i-1) break;
		if(str[i]!=str[len-1-i]){
			ans++;
		}
	}
	cout<<ans<<'\n';
	return 0;
}