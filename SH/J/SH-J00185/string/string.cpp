#include<bits/stdc++.h>
using namespace std;
int n,a,len,cnt,t;
string s="";
char c;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) {
	  cin>>a>>c;
	  len+=a;
	  while(a--) s+=c;
	}
	if(len%2==0) t=len/2-1;
	else t=len/2;
	for(int i=0;i<t;i++) 
	  if(s[i]!=s[len-i-1]) cnt++;
	cout<<cnt;
	return 0;
}
