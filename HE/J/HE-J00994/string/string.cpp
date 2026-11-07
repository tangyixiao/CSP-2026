#include<bits/stdc++.h>
using namespace std;
const long long N=1e5*2+10;
long long a[N];
char c[N];
long long n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(long long j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	if(n==1||n==2&&a[1]==a[2]||n==2&&c[1]==c[2]){
		cout<<0;
		return 0;
	}
	long long l=s.size(),cnt=0;
	for(long long i=0;i<s.size();i++){
		if(s[i+1]!=s[l-i-1]){
			cnt++;
			s[l-i]=s[i+1];
		}
	}
	cout<<cnt;
	return 0;
}
