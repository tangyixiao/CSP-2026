#include<bits/stdc++.h>
#define int long long
using namespace std;
string k;
int n,ans,cnt;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++){
			k+=c;
		}
		cnt+=a;
	}
	for(int i=0;i<(k.size()/2);i++){
		if(k[i]!=k[k.size()-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
