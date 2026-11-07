#include<bits/stdc++.h>
#define int long long
using namespace std;
int c1,c2;
string s1,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	int p1=(s1[0]-'0')*10+s1[1]-'0';
	int p2=(s2[0]-'0')*10+s2[1]-'0';
	if(p1==p2)cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if((s1[2]<='C' && s2[2]<='C') || (s1[2]>='D' && s2[2]>='D'))cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	char x1=s1[2],x2=s2[2];
	if(abs(x1-x2)==1 || x1=='F' || x2=='F')cout<<1;
	else cout<<0;
	return 0;
} 