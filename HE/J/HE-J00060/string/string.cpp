#include <bits/stdc++.h>
using namespace std;
string s;  
long long ans=0;                                                                                 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		char y;
		cin>>x>>y;
		for(int j=0;j<x;j++){
			s+=y;
		}
	}
	int l=s.size();
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
