#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll cnt=0;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s,a,b;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char c;
		cin>>x>>c;
		for(int j=1;j<=x;j++){
			s+=c;
		}
	}
	for(int i=0;i<s.size()/2;i++){
		a+=s[i];
	}
	for(int i=s.size()-1;i>=s.size()/2;i--){
		b+=s[i];
	}
	for(int i=0;i<s.size()/2;i++){
		if(a[i]!=b[i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
} 
