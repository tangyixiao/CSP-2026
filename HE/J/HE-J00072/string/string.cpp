#include<iostream>
#include<string>
using namespace std;
string s,str,c;
int n,a;
long long ans;
int main () {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a>>c;
		for(int j=0; j<a; j++) s+=c;
	}
	for(int i=0; i<s.size()/2; i++) {
		if(s[s.size()-i-1]!=s[i]) ans++;
	}
	cout<<ans;
	return 0;
}
