#include<bits/stdc++.h>
using namespace std;
string s;
string b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		long long t;
		cin>>t;
		char d;
		cin>>d;
		for(int j=0;j<t;j++){
			s+=d;
		}
	}
	for(int i=s.size();i>=0;i++){
		b+=s[i];
	}
	int tag=0; 
	for(int i=0;i<n;i++){
		if(s[i]!=b[i]){
			tag=1;
			break;
		}
	}if(tag=0){
		cout<<0;
	}else{
		cout<<18;
	}
	return 0;
} 
