#include<bits/stdc++.h>
using namespace std ;
int main(){
	preopen("string.in","r",stdin);
	preopen("string.out","w",stdout);
	int n;cin>>n;string s="";
	for(int i=1;i<=n;i++){
		long long a;cin>>a;
		string b;cin>>b;
		while(a--)s=s+b; 
	} 
	int c=0;
	if(s.size()%2==1) c=1;
	long long sum=0;
	for(long long i=0;i<s.size()/2+c;i++){
		if(s[i]!=s[s.size()-1-i]) sum++;
	}
	cout<<sum;
}
