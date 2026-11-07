#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	long long n;cin>>n;
	string s="";
	long long len=0;
	for(long long i=0;i<n;i++){
		long long a;string ss;
		cin>>a>>ss;len+=a;
		for(long long j=0;j<a;j++){
			s+=ss;
		}
	}
	long long cnt=0;
	for(long long i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1]) cnt++; 
	} 
	cout<<cnt;
	return 0;
}
