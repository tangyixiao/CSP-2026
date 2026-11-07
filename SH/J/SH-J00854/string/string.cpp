#include<bits/stdc++.h>
using namespace std;
int n,a,len,cnt;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	len=s.size()/2;
	for(int i=0;i<len;i++){
		if(s[i]!=s[s.size()-i-1])cnt++;
	}
	cout<<cnt;
	return 0;
}
