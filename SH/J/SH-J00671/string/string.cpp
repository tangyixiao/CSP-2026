#include<bits/stdc++.h>
using namespace std;
long long n,cnt=0;
string s;
int main(){
	cin>>n;
	long long x=1;
	for(int i=1;i<=n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s[x]=c;
			x++;
		}
	}
	for(int i=1;i<=(x-1)/2;i++){
		if(s[i]!=s[x-i]) cnt++;
	}
	cout<<cnt;
	return 0;
}
