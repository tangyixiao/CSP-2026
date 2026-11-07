#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n=0;
	cin>>n;
	string s="";
	long long a;
	string c[200005];
	for(long long i=0;i<n;i++){
		cin>>a>>c[i];
		for(long long j=0;j<a;j++){
			s+=c[i];
		}		
	}
	long long cnt=0;
	long long l=s.size();
	bool flag=true;
	for(long long i=1;i<=l-1;i++){
		if(s[i]!=s[i+1]){
			flag=false;
		}
	}
	if(flag){
		cout<<0;
		return 0;
	}
	for(long long i=0;i<l/2;i++){
		if(s[i]!=s[l+1-i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}