#include<bits/stdc++.h> 
using namespace std;
string s;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;	
	for(int i=1;i<=n;i++){
		long long k;
		char c;
		cin>>k>>c;
		for(int j=1;j<=k;j++){
			s += c;
		}	
	} 
	long long l=0,r = s.size()-1;
	long long ans=0,sum=0;
	while(l <= r){
		if(s[l] != s[r]){
			ans++;
		}
		r--;
		l++;
	}
	cout<<ans;
	return 0;
} 