#include <bits/stdc++.h>
using namespace std;
long long n,a,cnt,len;
int main() {

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string s;
	char c;
	for(long long i=0;i<n;i++){
		cin>>a>>c;
		for(long long j=0;j<a;j++){
			s+=c;
		}
	}
	len=s.size();
	for(long long i=0;i<len;i++){
		if(s[i]!=s[len-i-1]){
			cnt++;
		}
	}
	if(cnt%2!=0){
		cnt++;
	}
	cout<<cnt/2;

	return 0;
}

