#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int n,a;
long long ans;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	while(n--){
		cin>>a;
		cin>>c;
		while(a--){
			s+=c;
			break;
		}
	}
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i]){
			s[s.size()-1-i]=s[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
