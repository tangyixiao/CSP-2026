#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long area=0;
	for(int i=0;i<n;i++){
		long long x;
		string y;
		cin>>x>>y;
		area+=x;
		for(long long j=0;j<x;j++){
			s=s+y;
		}
		
	}
	long long ans=0;
	if(s.empty()){
		cout<<0;
		return 0;
	}
	for(long long i=0;i<(s.size()-1)/2;i++){
		if(s[i]!=s[area-i-1]){
			s[area-i-1]=s[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}