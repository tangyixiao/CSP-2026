#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,s1;
	long long n=1ll*1;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		long long  ai;
		char ci;
		cin>>ai>>ci;
		for(int j=0;j<ai;j++){
			s+=ci;
		}
	}
	long long x=s.length(),ss=0;
	for(int i=0;i<x;i++){
		if(s[i]==s[x-i]){
			ss++;
		}
		s1+=s[x-i];
	}
	if(x%2!=0){
		ss++;
	}
	if(ss==x){
		cout<<0;
	}
	else{
		int num=0;
		for(int i=0;i<x;i++){
			if(s[i]!=s1[i]){
				num++;
			}
		}
		if(x%2!=0){
			num--;
		}
		cout<<num;
	}
	return 0;
}
