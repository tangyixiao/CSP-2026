#include<bits/stdc++.h>
using namespace std;
string s,s1;
long long n,ant,t;
int main(){
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>t>>s1;
		for(long long j=0;j<t;j++){
			s+=s1;
		}
	}
	long long len=s.size();
	for(long long i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1]){
			ant++;
		}
	}
	cout<<ant;
	return 0;
} 
