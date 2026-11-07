#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(false),cout.tie(false);
	long long int n;cin>>n;
	string s="";
	for(long long int i=1;i<=n;i++){
		long long int a;char b;cin>>a>>b;
		for(long long int i=1;i<=a;i++) s+=b; 
	}
	long long int lens=s.length(),ans=0;
	for(long long int i=0;i<=lens-1-i;i++)
		if(s[i]!=s[lens-1-i]) ans++;
	cout<<ans;
	return 0;
}