#include<bits/stdc++.h>
using namespace std;
int n,m,c;
string a;
string s1;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>m>>a;
		for(int i=1;i<=m;i++) {
			s1=s1+a;
		}
	}
	for(int i=0;i<s1.size()/2;i++) {
		if(s1[i]!=s1[s1.size()-i-1]) {
			c++;
		}
	}
	cout<<c;
	return 0;
}