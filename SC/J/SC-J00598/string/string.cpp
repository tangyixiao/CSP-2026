#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long cnt=0;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	if(n==1)cout<<"0"; 
	long long len=s.size();
	for(long long i=0;i<len;i++){
		if(s[i]!=s[len-i-1])cnt++;
	}
	cout<<cnt/2;
	return 0;
}