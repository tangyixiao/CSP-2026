#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
char a[N];
void solved(){
	long long n; cin>>n;
	string s={};
	s=' '+s;
	long long m=0;
	for(int i=1;i<=n;i++){
		int x;
		char c;
		cin>>x>>c;
		m+=x;
		while(x--){
			s+=c;
		}
	}
	long long ans=0;
	for(int i=1;i<=m/2;i++){
		if(s[i]!=s[m-i+1]) ans++;
	}
	cout<<ans;
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
//	int t; cin>>t; while(t--) 
	solved();
	
	return 0;
} 
