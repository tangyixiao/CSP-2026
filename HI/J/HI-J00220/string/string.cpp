#include<bits/stdc++.h>
using namespace std;
long long n,x,o=0;
char y,c=' ';
string s;
bool b=true;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		if(i!=1){
			if(c!=y) b=false;
		}
		c=y;
		for(int j=0;j<x;j++) s+=y;
	}
	if(b) cout<<0;
	else{
		for(int i=0;i<s.size()/2;i++)
			if(s[i]!=s[s.size()-1-i]) o++;
		cout<<o;
	}
	return 0;
}
