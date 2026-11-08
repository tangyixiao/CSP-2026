#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		int x;
		char y;
		cin>>x>>y;
		for(int j=0;j<x;j++){
			s+=y;
		}
	}
	long long l=s.size();
	long long d=0;
	for(int i=0;i<=l/2;i++){
		if(s[i]!=s[l-i-1]) d++;
	}
	cout<<d;

	return 0;
}


