#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s; 
	long long ans=0;
	for(int i=0;i<n;i++){
		long long x;
		char y;
		cin>>x>>y;
		for(int j=0;j<x;j++){
			s+=y;
		}
	}
	long long d=s.size();
	long long v=d/2,l=0,r=s.size()-1;
	//]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]
	for(int i=0;i<v;i++){
		if(s[l] != s[r]){
			ans++; 
		}
		l++;
		r--; 
	}
	cout<<ans;
	return 0;
}
