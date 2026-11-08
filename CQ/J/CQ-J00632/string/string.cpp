#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
using ll=long long;

int main(){
	ifstream in("string.in");
	ofstream out("string.out");
	ll ans=0;
	int n; in>>n;
	vector<char> s;
	vector<ll> num;
	s.push_back(' ');num.push_back(0);
	ll length=0;
	for(int i=1;i<=n;i++){
		char l1;ll l2;
		in>>l2>>l1;
		length+=l2;
		s.push_back(l1);num.push_back(l2);
	}
	ll it1=1,it2=n;
	char it1c; ll it1n;
	char it2c; ll it2n;
	;it1n=num[1];
	;it2n=num[n];
	for(;it1<=n&&it2>0&&it1<it2;){
		if(s[it1]==s[it2])
			if(it1n>it2n) {it1n-=it2n;it2n=0;}
			else {it2n-=it1n;it1n=0;}
		else{
			if(it1n>it2n){s[it2]=s[it1];it1n-=it2n;ans+=it2n;it2n=0;}
			else {s[it1]=s[it2];it2n-=it1n;ans+=it1n;it1n=0;}
			
		}
		if(it1n==0) {it1++;it1n=num[it1];}
		if(it2n==0) {it2--;it2n=num[it2];}
	}
	out<<ans;
	return 0;
}
