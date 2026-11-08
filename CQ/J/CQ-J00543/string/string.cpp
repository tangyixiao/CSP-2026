#include <bits/stdc++.h>
using namespace std;
struct flipping{
	int num;
	string op;
};
int n;
bool hui(string s){
	int len=s.length();
	for(int i=0;i<len/2;i++) {
		if(s[i]!=s[len-1-i]) {
			return false;
		}
	}
	return true;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	vector<flipping> str(n);
	string s=""; 
	for(int i=0;i<n;i++) {
		cin>>str[i].num>>str[i].op;
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<str[i].num;j++) {
			s+=str[i].op;
		}
	}
	if(hui(s)){
		cout<<0;
		return 0;
	}
	cout<<s.length()/2;
	return 0;
}
//Confusion-Time-Fire-Precious-Free
//Fighter-Lost-Concern-Cloud-Miracle
