#include<bits/stdc++.h>
using namespace std;
string s;
long long p,n,cnt=0;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p>>c;
		for(int j=1;j<=p;j++){
			s+=c;
		}
	}
	long long len=s.size();
	for(int i=0;i<ceil(len/2);i++){
		if(s[i]!=s[len-i-1])cnt++;
	}
	cout<<cnt;
	return 0;
}

