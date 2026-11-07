#include<bits/stdc++.h>
using namespace std;

const int N=2e5+10;
int n;
string s;
long long ans=0;

int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++) s+=c;
	}
	
	for(long long i=0,j=s.size()-1;i<=s.size()/2-1;i++,j--){
		if(s[i]!=s[j]) ans++;
	}
	
	cout<<ans;
	
	return 0;
} 
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
