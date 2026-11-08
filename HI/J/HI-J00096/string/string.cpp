#include<bits/stdc++.h>
using namespace std;
long long cnt;
int n;
int a[30]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++){
		long long x;char c;
		cin>>x>>c;
		for(long long j=1;j<=x;j++){
			s+=c;
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[s.size()-i-1]) {
			cnt++;
		}
	} 
	cout<<cnt/2;
	return 0; 
}
