#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
long long int n,a,sum=0;
char s;
string x;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>s;
		for(int j=0;j<a;j++){
			x+=s;
		}
	}
	for(int i=0;i*2<x.size();i++){
		if(x[i]!=x[x.size()-1-i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}