#include<bits/stdc++.h>
using namespace std;
int n,a[211111],cnt;
char c[211111];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		string t(a[i],c[i]);
		s+=t;
	}
	int ls=s.size();
	for(int i=1;i*2<=ls+1;i++){
		if(s[i-1]!=s[ls-i+1-1])cnt++;
	}
	cout<<cnt;
	return 0;
}
