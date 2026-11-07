#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,count=0;
	cin>>a;
	string b,c;
	for(int i=0;i<a;i++){
		string s;
		int d;
		cin>>d;
		cin>>s;
		for(int i=0;i<d;i++){
			b+=s;
		}
	}
	c=b;	
	reverse(b.begin(),b.end());
	for(int i=0;i<b.size();i++){
		if(b[i]!=c[i]){
			count++;
		}
	}
	cout<<count/2;
		return 0;
} 



