#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int t,ans=0;
	cin>>t;
	string a;
	while(t--){
		int n;
		char t1;
		cin>>n>>t1;
  		while(n--)a+=t1;
	}
	int len=a.size()-1;
	for(int i=0;i<len/2;i++){
		if(a[i]!=a[len-i])ans++;
	}
	cout<<ans;
	return 0;
}