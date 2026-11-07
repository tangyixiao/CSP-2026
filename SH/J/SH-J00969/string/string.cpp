#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a,ba=0,lll=1,s[100500],cn=0;
	string x,m[100500];
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>s[i]>>x[i];
		ba+=s[i];
		for(int j=1;j<=s[i];j++){
			m[lll]=x[i];
			lll++;
		}
	}
	lll=ba/2;
	for(int i=1;i<=lll;i++){
		if(m[i]!=m[ba-i])cn++;
	}
	cout<<cn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
