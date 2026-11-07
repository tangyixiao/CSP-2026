#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(s1[2]=='F') s1[2]='E';
	if(s2[2]=='F') s2[2]='E';
	bool t1=(c1==c2);
	bool t2=(t1&&(s1[0]==s2[0])&&(s1[1]==s2[1]));
	bool t3=(t2&&((s1[2]>'C'&&s2[2]>'C')||((s1[2]<'D'&&s2[2]<'D'))));
	bool t4=(t3&&abs(s1[2]-s2[2])<=1);
	cout<<t1<<t2<<t3<<t4;
	return 0;
}