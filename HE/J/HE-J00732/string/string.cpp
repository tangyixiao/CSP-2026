#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	long long a;
	char c;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	cout<<s<<endl;
	long long ans=0;
	for(int i=1;i<=(s.size()+1)/2;i++){
		if(s[i-1]!=s[s.size()-i]) ans++;
	}
	cout<<ans;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	solve();
	return 0;
} 
