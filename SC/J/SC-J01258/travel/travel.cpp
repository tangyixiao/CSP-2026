#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	bool ch1=0,ch2=0,ch3=0;
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	char t1=s1[2],t2=s2[2];
	if(c1==c2){
		cout<<"1";
		ch1=1;
	}
	else
		cout<<0;
	if(ch1&&s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1;
		ch2=1;
	}
	else
		cout<<0;
	if(ch2&&((t1<='C'&&t2<='C')||(t1>'C'&&t2>'C'))){
		cout<<"1";
		ch3=1;
	}
	else
		cout<<0;
	if(ch3&&(t1-t2==1||t2-t1==1))
		cout<<1;
	else
		cout<<0;
	return 0;
}