#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a=0,cnt=0;
	cin>>n;
	while(n--){
		long long x;
		char y;
		cin>>x>>y;
		for(long long i=1;i<=x;i++){
			s[++a]=y;
		}
	}
	for(long long i=1;i<=a/2;i++){
		if(s[i]!=s[a-i+1]) cnt++;
	}cout<<cnt;
	return 0;
} 