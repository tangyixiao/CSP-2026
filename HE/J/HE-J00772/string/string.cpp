#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s;
	s+='0';
	int cnt=0;
	while(n--){
		int xnt;
		char x;
		cin>>xnt>>x;
		for(int i=1;i<=n;i++){
			s+=x;
		}
	}
	int asn=s.size();
	for(int i=1;i<=s.size()/2;i++){
		if(s[i]==s[asn]){
			cnt++;
		}
		asn--;
	}
	cout<<cnt;
	return 0;
}
