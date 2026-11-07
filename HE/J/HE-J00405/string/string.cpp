#include<bits/stdc++.h>
using namespace std;

long long cnt=0;
struct N{
	long long a;
	char c;
	string aa;
}s[10010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;string ss;
	cin>>n;
	long long x=n;
	for(int i=0;i<n;i++){
		cin>>s[i].a>>s[i].c;
		s[i].aa=s[i].a*s[i].c;
		ss+=s[i].aa;
	}
	for(int i=0;i<n/2;i++){
		if(ss[i]!=ss[x--])cnt++;
	}
	cout<<cnt;
	return 0;
}
