#include<bits/stdc++.h>
using namespace std;
int num(int a){
	if(a%2==0)return a/2;
	else return a/2+1;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="",S;int n,a,r=0;char b;cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		for(int j=0;j<a;j++)s+=b;
	}
	for(int i=0;i<num(s.size());i++){
		S+=s[s.size()-i-1];
	}
	for(int i=0;i<num(s.size());i++){
		if(s[i]!=S[i])r++;
	}cout<<r;
}