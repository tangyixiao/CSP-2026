#include <bits/stdc++.h>
using namespace std;
long long n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long a;
		cin>>a;
		string t;
		cin>>t;
		for(long long j=1;j<=a;j++){
			s+=t;
		}
	}
	long long ans=0;
	long long len=s.size();
	long long t;
	if(len%2==0){
		t=len/2;
	}
	else{
		t=len/2+1;
	}
	long long j=len-1;
	for(long long i=0;i<=t-1;i++){
		if(s[i]!=s[j]){
			ans++;
		}
		j--;
	}
	cout<<ans;
	return 0;
}
