#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,t=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a=0;
		char b=0;
		cin>>a>>b;
		for(int j=t;j<a+t;j++){
			s1[j]=b;
		}
		t+=a;
	}
	for(int i=0;i<t;i++){
		s2[t-i-1]=s1[i];
	}
	int cnt=0;
	for(int i=0;i<=t/2;i++){
		if(s1[i]!=s2[i]) cnt++;
	}
	cout<<cnt;
	return 0;
}