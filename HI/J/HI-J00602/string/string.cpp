#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long x;
	char y;
	int v=0;
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		if(x>=1000000000){
			v=x;
			x/=1000000000;
		}
		while(x--)s+=y;
	}	
	long long len=s.size();
	string a;
	for(int i=len-1;i>=0;i--){
		a+=s[i];
	}
	if(a==s){
		cout<<0;
		return 0;
	}
	long long cnt=0;
	for(int i=len/2;i<len;i++){
		if(a[i]!=s[i]){
			cnt++;
		}
	}
	if(v!=0)cout<<cnt*v;
	else cout<<cnt;
	return 0;
}

