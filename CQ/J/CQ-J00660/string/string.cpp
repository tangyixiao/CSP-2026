#include<bits/stdc++.h>
using namespace std;
int n,m;
string s="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++) s+=c;
		m+=a;
	}
	int cnt=0;
	for(int i=0;i<m/2;i++){
		if(s[i]!=s[m-1-i]) cnt++;
	}
	cout<<cnt;
	return 0;
}
