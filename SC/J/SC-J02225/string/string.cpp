#include<bits/stdc++.h>
using namespace std;
string solve(string s1){
	string x="";
	for(int i=s1.size()-1;i>=0;i--){
		x+=s1[i];
	}
	return x;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		
		cin>>a;
		char c;
		cin>>c;
		s+=string(a,c);
		
	}
	if(s==solve(s)){
		cout<<0;
		return 0;
	}
	else{
		long long cnt=0,len=s.size();
		for(int i=0;i<=len/2;i++){
			if(s[i]!=s[len-i])cnt++;
		}
		cout<<cnt;
		return 0;
	}
	return 0;
}