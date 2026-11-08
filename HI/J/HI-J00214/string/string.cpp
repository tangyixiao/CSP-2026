#include<bits/stdc++.h>
using namespace std;
long long n,cnt=0;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(long long j=1;j<=a;j++){
			s+=c;
		}
	}
	long long len=s.size();
	long long l=0,r=len-1;
	for(long long i=0;i<=len-1;i++,l++,r--){
		if(l>=r&&r<=l){
			break;
		}
		if(s[l]!=s[r]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
