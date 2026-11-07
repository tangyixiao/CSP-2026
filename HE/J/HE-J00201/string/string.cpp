#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main () {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	long long int a;
	char b;
	cin>>a>>b;
	for(long long int j=1;j<=a;j++){
	s+=b;}}
	string q;
	q=s;
	reverse(s.begin(),s.end());
	if(q==s) cout<<"0";
	else{
	long long int sum=0;
	for(long long int i=0;i<s.size()/2;i++){
	if(q[i]!=s[i]) sum++;}
	cout<<sum;}
	return 0;}
