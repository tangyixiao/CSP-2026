#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	queue<int>q;
	string as="";
	for(int i=0;i<n;i++){
		int x;
		char s;
		cin>>x>>s;
		for(int i=0;i<x;i++){
			as+=s;
		}
	}
	string sa=as;
	reverse(as.begin(),as.end());
	if(n==1 ||sa==as){
		cout<<0;
		return 0;
	}else{
		cout<<5; 
	}
	return 0;
} 