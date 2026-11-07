#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,d=0;
	string s;
	cin>>n;
	for(int i=0,x;i<n;i++){
		char c;
		cin>>x>>c;
		for(int j=0;j<x;j++){
			s+=c;
		}
	}
	string ss=s;
	reverse(s.begin(),s.end());
	int x=s.size();
	for(int i=0;i<x/2;i++){
		if(s[i]!=ss[i]){
			d++;
		}
	}
	cout<<d;
	return 0;
} 
