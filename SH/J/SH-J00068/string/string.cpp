#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;char b;
		cin>>a>>b;
		s.append(a,b);
	}
	string t=s;
	reverse(s.begin(),s.end());
	long long cnt=0;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=t[i])cnt++;
	}
	cout<<cnt;
	return 0;
}
