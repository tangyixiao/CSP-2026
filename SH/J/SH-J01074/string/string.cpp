#include <bits/stdc++.h>
using namespace std;
int n;
string s="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for( int i = 1; i <= n; i++ ){
		int x;
		char c;
		cin>>x>>c;
		while(x--){
			s+=c;
		}
	}
	int len=s.size()-1;
	int ans=0;
	for( int i = 0; i < len/2; i++ ){
		if(s[i] != s[len-i]){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
