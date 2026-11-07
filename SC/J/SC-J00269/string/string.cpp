#include <bits/stdc++.h>

using namespace std;
#define int long long
//const int maxn=;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<int>a(n+1);
	vector<char>c(n+1);
	string str="";
	int mx=0,sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		mx=max(a[i],mx);
		sum+=a[i];
	}
	if(mx*n>=10000000000) return cout<<sum/2+sum%2,0;
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=a[i];j++) str+=c[i];
	}
	int ans=0;
	for(int i=0;i<str.size()/2;i++){
		if(str[i]!=str[str.size()-i-1]) ans++;
	} 
	cout<<ans;
	return 0;
}