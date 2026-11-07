#include<bits/stdc++.h>
using namespace std;
long long cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s;
	while(n--){
		long long a;
		char c;
		cin>>a>>c;
		for(long long i=1;i<=a;i++){
			s+=c;
		}
	}
	string x;
	long long sz=s.size();
	for(long long i=0;i<sz;i++){
		x[i]=s[sz-i-1];
	}
	for(long long i=0;i<sz;i++){
		if(s[i]!=x[i]){
			cnt++;
		}
	}
	cout<<cnt/2;
	return 0;
}
