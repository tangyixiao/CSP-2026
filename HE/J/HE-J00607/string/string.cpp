#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long cnt=0;
	string s="";
	cin>>n;
	while(n--){
		long long len;
		char a;
		cin>>len>>a;
		for(long long i=1;i<=len;i++)
			s+=a;
	}
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=s[(s.size())-i-1])
			cnt++;
	}
	cout<<cnt;
	return 0;
}
