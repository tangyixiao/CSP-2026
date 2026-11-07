#include <bits/stdc++.h>
using namespace std; 
int n;
long long ans;
string s;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdin);
	cin>>n;
	for(int i=1;i<=n;i++){
		int tmp;
		string tmps; 
		cin>>tmp>>tmps;
		for(int i=1;i<=tmp;i++)
			s+=tmps;
	}
	long long l=s.size();
	for(int i=1;i<=l/2;i++)
		if(s[i-1]!=s[l-i])
			ans++;
	cout<<ans;
	return 0;
}