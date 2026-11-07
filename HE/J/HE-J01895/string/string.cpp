#include<bits/stdc++.h>
using namespace std;
int n;
int cnt;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	s+=' ';
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	long long len=s.size();
	len--;
	long long clen=len/2;
	for(int i=1;i<=clen;i++){
		if(s[i]!=s[len-i+1]) cnt++;
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
