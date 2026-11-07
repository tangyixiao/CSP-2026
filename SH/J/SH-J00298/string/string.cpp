#include<bits/stdc++.h>
using namespace std;
long long n,ans=0;
string s;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	for(long long i=0;i<=s.size()-i-1;i++){ 
		if(s[i]!=s[s.size()-i-1]){
			ans++;
		}
	}
	cout<<ans<<'\n';
	return 0;
}
