#include<bits/stdc++.h>
using namespace std;
#define int long long
string s1,s2;
int a,b;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s1>>b>>s2;
	if(a!=b) cout<<"0000";
	else if((s1[0]-'0')*10+s1[1]-'0'!=(s2[0]-'0')*10+s2[1]-'0') cout<<"1000";
	else if((s1[2]<='C'&&s2[2]>'C')||(s1[2]>'C'&&s2[2]<='C')) cout<<"1100";
	else if(abs(s1[2]-s2[2])!=1) cout<<"1110";
	else cout<<"1111";
	return 0;
} 