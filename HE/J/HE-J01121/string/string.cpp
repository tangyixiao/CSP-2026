#include <bits/stdc++.h>
using namespace std;
long long n,x,cnt;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s1="";
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		cin >> x >> c;
		for(int i=1;i<=x;i++) s1+=c;
	}
	long long len=s1.size();
	for(int i=0;i<len/2;i++){
		if(s1[i]!=s1[len-i-1]) cnt++;
	}
	printf("%lld",cnt);
	
	return 0;
}
