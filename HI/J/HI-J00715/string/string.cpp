#include <bits/stdc++.h>
using namespace std;

long long n,a;
char c;

int main() {
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	string s="";
	for(long long i=1;i<=n;i++){
		cin>>a>>c;
		while(a){
			s+=c;
			a--;
		}
	}
	long long l=0,r=s.size()-1,cnt=0;
	while(l<=r){
		if(s[l]!=s[r]) cnt++;
		l++; r--;	
	}
	printf("%lld",cnt);
	
	return 0;
}

