#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		while(a--) s+=c;
	}
	int len=s.size(),l=s.size(),cnt=0;
	for(int i=0;i<l;i++){
		if(s[i]!=s[len-1-i]){
			cnt++;
			s[len-1-i]=s[i];
		}
	}
	cout<<cnt;
	return 0;
}