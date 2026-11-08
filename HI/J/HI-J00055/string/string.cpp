#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	while(n--){
		long long a;
		cin>>a;
		char c;
		cin>>c;
		if(n*a>100000000){
			cout<<"0";
			return 0;
		}
		for(long long i=1;i<=a;i++){
			s+=c;
		}
	}
	long long x=s.size();
	long long ans=0;
	for(long long i=0;i<x/2;i++){
		if(s[i]!=s[x-1-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
