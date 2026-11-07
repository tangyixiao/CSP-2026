#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);
	string s="";
	long long n;
	cin>>n;
	for(long long i=0;i<n;i++){
		long long num;
		char a;
		cin>>num>>a;
		for(long long j=0;j<num;j++)s+=a;
	}
	string temp=s;
	reverse(s.begin(),s.end());
	long long count=0;
	for(long long i=0;i<s.size();i++)s[i]!=temp[i]?count++:1;
	cout<<count/2;
	return 0;
} 