#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;long long m=0; 
	string s="";
	long long a;char b;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		for(int j=0;j<a;j++){
			s+=b;
		}
	}
	for(int i=0;i<n/2;i++){
		if(s[i]!=s[n-i]){
			m++;
		}
	}
	cout<<m;
	return 0;
}
