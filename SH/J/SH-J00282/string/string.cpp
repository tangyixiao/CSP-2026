#include<bits/stdc++.h>
using namespace std;
string s="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int N;
	long long ans=0;
	cin>>N;
	for(int i=0;i<N;i++){
		int a;
		char c;
		cin>>a>>c;
		for(long long j=0;j<a;j++)
			s+=c;
	}
	long long len=s.size();
	for(long long i=0;i<len/2;i++){
		long long j=len-i-1;
		if(s[i]!=s[j])
			ans++;
	}
	cout<<ans<<endl;
	return 0;
} 
