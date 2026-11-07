#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="",sa;
	long long x;
	for(long long i=1;i<=n;i++){
		cin>>x>>sa[0];
		for(long long j=1;j<=x;j++){
			s+=sa[0];
		}
	}

	string fs;
	for(long long i=s.size()-1;i>=0;i--){
		fs+=s[i];
	}
	long long cnt=0;
	long long l=s.size();
	for(long long ii=0;ii<l;ii++){
		if(s[ii]!=fs[ii])cnt++;
	}

	cout<<cnt/2;
	return 0;
}
