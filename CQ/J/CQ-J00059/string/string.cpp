#include <bits/stdc++.h>
using namespace std;
int main(){
	 freopen("string","r",stdin);
	 freopen("string","w",stdout);
	 
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	string s;
	
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		long long a;
		char b;
		cin>>a>>b;
		long long p=s.size();
    	s.insert(p,a,b);
	}
	long long p=s.size(),sum=0; 
	string q=s;
	reverse(s.begin(),s.end());
	if(s==q){
		cout<<0;
		return 0;
	}
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=q[i]) sum++;
	}
	cout<<sum;
	return 0;
} 
