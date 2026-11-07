#include<bits/stdc++.h>
using namespace std;
int n;
long long ans;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int m;
		char x;
		cin>>m>>x;
		for(int j=1;j<=m;j++)s+=x;
	}
	for(int i=0;i<s.length();i++){
		if(s[i]!=s[s.length()-i-1] && i<s.length()-i-1){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
