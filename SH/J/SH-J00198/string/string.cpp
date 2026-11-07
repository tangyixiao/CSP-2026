#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[100001];
char ch[100001];
string s;
long long cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>ch[i];
		for(long long j=1;j<=a[i];j++) s+=ch[i];
	}
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]) cnt++;
	}
//	cout<<s<<endl;
	cout<<cnt;
	return 0;
}
