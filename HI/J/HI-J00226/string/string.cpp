#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s="";
	for(long long i=0;i<n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(long long j=0;j<a;j++){
			s+=c;
		}
	} 
	long long l=0,r=s.size()-1,c=0;
	while(l<r){
		if(s[l]!=s[r])  c++;
		l++;
		r--;
	}
	cout<<c;
	return 0;
}
