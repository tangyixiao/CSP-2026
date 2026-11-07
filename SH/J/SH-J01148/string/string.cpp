#include<iostream>
#include<cstring>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	long long n,cnt=0;
	cin >> n;
	for(long long i=1;i<=n;i++){
		long long m;
		string ch;
		cin >> m;
		cin >> ch;
		for(long long j=1;j<=m;j++){
			s+=ch;
		}
	}
	long long len=s.length();
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1]) cnt++;
	}
	cout << cnt;
	return 0;
}
