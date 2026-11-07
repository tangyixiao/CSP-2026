#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s;
	long long cnt=0,diff=0;
	for(long long i=0;i<n;i++){
		long long a;
		char b;
		cin>>a>>b;
		for(long long j=0;j<a;j++){
			s[cnt]=b;
			cnt++;
		}
	}
	for(long long i=0;i<(cnt/2);i++){
		if(s[i]!=s[cnt-i-1]){
			diff++;
		}
	}cout<<diff;
	return 0;
}