#include<bits/stdc++.h>
using namespace std;
bool hui(string s){
	string t=s;
	reverse(s.begin(),s.end());
	if(t==s) return 1;
	else return 0;
}
int main(){
	ios::sync_with_stdio(false);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);
	cout.tie(0);
	long long n;cin>>n;
	long long x;char t;string s;
	for(long long i=0;i<n;i++){
		cin>>x>>t;
		for(long long j=0;j<x;j++) s+=t;
	}
	long long cnt=0;
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			cnt++; 
			s[i]=s[s.size()-i-1];
			if(hui(s)) break;
		}
	}
	cout<<cnt;
	return 0;																												
} 																															
