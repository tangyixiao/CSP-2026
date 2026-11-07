#include<bits/stdc++.h>
using namespace std;
int n;
string s="";
long long len=0;
long long ans=0;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		long long a;
		char c;
		cin>>a>>c;
		len+=a;
		while(a--){
			s=s+c;
		}
	}
	for(int i=0;i<(len+1)/2;++i){
		if(s[i]!=s[len-i-1]){
			++ans;
		}
	}
	cout<<ans;
	return 0;
}
