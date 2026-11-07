#include<bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int ss1=(s1[0]-'0')*10+(s1[1]-'0'),k1;
	int ss2=(s2[0]-'0')*10+(s2[1]-'0'),k2;
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C') k1=0;else k1=1;
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C') k2=0;else k2=1;
	if(c1==c2) cout<<1; else cout<<0;
	if(c1==c2&&ss1==ss2) cout<<1; else cout<<0;
	if(c1==c2&&ss1==ss2&&k1==k2) cout<<1; else cout<<0;
	if(c1==c2&&ss1==ss2&&k1==k2&&abs(s1[2]-s2[2])==1) cout<<1;
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
