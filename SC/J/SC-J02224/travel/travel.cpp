#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1,s1,c2,s2;
int a1,a2,a3,a4;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) a1=1;
	else a1=0;
	if(c1==c2 && s1[1]==s2[1] && s1[0]==s2[0]) a2=1;
	else a2=0;
	if(a2==1 && (((s1[2]=='F' || s1[2]=='D') && (s2[2]=='F' || s1[2]=='D')) || ((s1[2]=='A' || s1[2]=='B' || s1[2]=='C') && (s2[2]=='A' || s2[2]=='B' || s2[2]=='C')))) a3=1;
	else a3=0;
	if(a3==1 && abs(s1[2]-s2[2])==1) a4=1;
	else a4=0;
	cout<<a1<<a2<<a3<<a4;
	return 0;
}