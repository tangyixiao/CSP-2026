#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		char b;
		int a;
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			s+=b;
		}
	}
	int len =s.size();
	int cnt=0;
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-1-i])cnt++;
	}
	cout<<cnt;
	return 0;
}

