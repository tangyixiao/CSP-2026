#include<bits/stdc++.h>
using namespace std;
int c1,c2,num1,num2,sid1,sid2;
string s1,s2;
bool flag1=true;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else{
		cout<<0;
		flag1=false;
	}
	num1=(s1[0]-'0')*10+s1[1]-'0';
	num2=(s2[0]-'0')*10+s2[1]-'0';
	if(num1==num2 and flag1) cout<<1;
	else{
		flag1=false;
		cout<<0;
	}
	if(s1[2]=='D' or s1[2]=='F') sid1=2;
	else sid1=1;
	if(s2[2]=='D' or s2[2]=='F') sid2=2;
	else sid2=1;
	if(flag1 and sid1==sid2) cout<<1;
	else{
		cout<<0;
		flag1=false;
	}
	int get1=s1[2]-'A'+1;
	if(get1==6) get1=5;
	int get2=s2[2]-'A'+1;
	if(get2==6) get2=5;
	if(abs(get1-get2)==1 and flag1) cout<<1;
	else cout<<0;
	return 0;
}