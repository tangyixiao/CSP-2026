#include<bits/stdc++.h>
using namespace std;
int n;
unsigned long long a,l,ct;
string s,c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	while(n--){
		cin>>a>>c;
		while(a--){
			s+=c;
			l++;
		}
	}
	for(int i=0;i<=l/2-1;i++){
		if(s[i]!=s[l-i-1]) ct++;
	}
	cout<<ct<<'\n';
	return 0;
}
