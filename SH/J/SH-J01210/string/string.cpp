#include<bits/stdc++.h>
using namespace std;
string s;
int n,cnt=0;
void check(string l,string r){
	for(int i=0;i<=l.size();i++)if(l[i]!=r[i])cnt++;
	return;
}
int main(){
 	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		long long num;
		char let;
		cin>>num>>let;
		for(long long j=0;j<num;j++)s+=let;
	}
	string ls,rs;
	if(s.size()%2==0){
		for(int i=0;i<s.size()/2;i++)ls+=s[i];
		for(int i=s.size()-1;i>=s.size()/2;i--)rs+=s[i];
	}else{
		for(int i=0;i<s.size()/2;i++)ls+=s[i];
		for(int i=s.size();i>s.size()/2+1;i--)rs+=s[i];
	}
	check(ls,rs);
	cout<<cnt;
	return 0;
}
