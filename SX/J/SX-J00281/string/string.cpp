#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,l=-1,cnt=0;
	string c,s="";
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		l+=a;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	for(int i=0;i<=l/2;i++){
		if(s[i]!=s[l-i]) cnt++;
	}
	cout<<cnt;
	return 0;
}