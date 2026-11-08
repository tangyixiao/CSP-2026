#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;cin>>n;
	string s;
	long long cnt=0;
	for(int i=1;i<=n;i++){
		long long x;cin>>x;
		char y;cin>>y;
		for(int i=1;i<=x;i++){
			s+=y;
		}
	}
	
	long long j=0,l=s.size()-1;
	for(long long i=1;i<=s.size()/2;i++){
		if(s[j]!=s[l]){
			cnt++;
		}
		j++;
		l--;
	}
	cout<<cnt;
	return 0;
}

