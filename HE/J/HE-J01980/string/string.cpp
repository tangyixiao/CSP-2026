#include<bits/stdc++.h>
using namespace std;
string s;
int a[500005],n,len;
unsigned long long ct;
char e;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>e;
		for(int j=1;j<=a[i];j++){
			s+=e;
		}
	}
	len=s.size();
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-1-i]){
			ct++;
		}
	}
	cout<<ct;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
