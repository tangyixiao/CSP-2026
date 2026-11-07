#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a,b,m=0,p=0;
	char s1;
	string s="",sr,s2,s3;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>s1;
		m+=b;
		for(int j=0;j<b;j++) s+=s1;
	}
	sr=s;
	sort(s.rbegin(),s.rend());
	for(int i=0;i<m/2;i++){
		s2+=sr[i];
	}
	for(int i=0;i<m/2;i++){
		s3+=s[i];
	}
	for(int i=0;i<m/2;i++){
		if(s2[i]!=s3[i]);
		p++;
	}
	cout<<p;
	return 0;
}