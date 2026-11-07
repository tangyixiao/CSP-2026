#include<bits/stdc++.h>
using namespace std;
long long n,cnt;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		int a;
		char c;
		cin>>a>>c;
		while(a--) s+=c;
	}
	n=s.size();
	s=' '+s;
	for(int i=1;i<=n/2;i++)	if(s[i]!=s[n-i+1]) cnt++;
	cout<<cnt;
	return 0;
}
