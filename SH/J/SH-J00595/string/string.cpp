#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a;
	char c;
	string s=" ";
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		while(a--){
			s+=c;
		}
	}
	int l=s.size()-1;
	int ans=0;
	for(int i=1;i<=(l+1)/2;i++){
		if(s[i]!=s[l+1-i]){
			ans++;
			s[l+1-i]=s[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}
