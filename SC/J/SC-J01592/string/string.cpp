#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",cin);
	freopen("string.out","l",cout);
	int n,cnt=0;
	cin>>n;
	string s1,s2;
	for(int i=0;i<n;i++){
		int a;
		char b;
		cin>>a>>b;
		for(int i=0;i<a;i++){
			s1+=b;
		}
	}
//	cout<<s1<<"\n";
	int len=s1.length();
	for(int i=0;i<len;i++){
		s2[i]=s1[len-i-1];
	}
//	cout<<s2<<"\n";
	for(int i=0;i<len/2;i++){
		if(s1[i]!=s2[i]){
			cnt++;
			s1[i]=s2[i];
		}
	}
//	cout<<s1<<"\n";
	cout<<cnt;
	return 0;
} 