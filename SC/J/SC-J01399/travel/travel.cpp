#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	bool f1,f2,f3,f4;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)f1=1;
	else f1=0;
	if(s1[0]==s2[0]&&s1[1]==s2[1])f2=1;
	else f2=0;
	if(f1==0)f2=0;
	int x1,x2;
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C')x1=1;
	else x1=2;
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')x2=1;
	else x2=2;
	if(f2==1&&x1==x2)f3=1;
	else f3=0;
	f4=0;
	if(f3==1){
		if(abs(s1[2]-s2[2])==1) f4=1;
		if(s1[2]=='D'&&s2[2]=='F')f4=1;
		if(s1[2]=='F'&&s2[2]=='D')f4=1;
	}
	cout<<f1<<f2<<f3<<f4;
	return 0;
}