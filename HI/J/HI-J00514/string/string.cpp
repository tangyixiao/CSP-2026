#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	string s="";
	string s1="";
	for(int i=1;i<=n;i++){
		int a;
		string c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	for(int i=s.size();i>=0;i--){
		s1+=s[i];
	}
	int ans=0;
	int mid=(s.size()+2)/2;
	for(int i=mid;i<=s.size();i++){
		if(s[i]!=s1[i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
