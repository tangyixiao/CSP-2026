#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,cnt=0;
	string s,t;
	cin>>n;
	for(int i=1;i<=n;i++){
		int m;
		char c;
		cin>>m>>c;
		for(int j=1;j<=m;j++){
			s+=c;
		}
	}t=s;
	reverse(s.begin(),s.end());
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=t[i]) cnt++;
	}cout<<cnt;
	return 0;
}
