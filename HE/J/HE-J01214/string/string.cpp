#include<bits/stdc++.h>
using namespace std;
int n,a[200010];
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	string s="",rs="";
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s+=c[i];
			rs+=c[i];
		}
	}
	reverse(rs.begin(),rs.end());
	long long ans=0;
	for(int i=0;i<s.size();i++){
		if(s[i]!=rs[i]){
			ans++;
		}
	}
	cout<<ans/2;
	return 0;
}

