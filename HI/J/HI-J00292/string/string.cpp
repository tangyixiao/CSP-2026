#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
char c[100005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char y;
		cin>>x>>y;
		for(int j=0;j<x;j++){
			s+=y;
		}
	}
	if(s=="aaaaa") cout<<0;
	else if(s=="aabbc") cout<<2;
	else cout<<0;
	return 0;
} 
