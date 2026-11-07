#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss;
int tmp1,tmp2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cc>>ss;
	tmp1=s[2]-'A';
	tmp2=ss[2]-'A';
	if(c==cc)
		cout<<'1';
	else{
		cout<<"0000";
		return 0;
	}
	if(s[0]==ss[0] && s[1]==ss[1])
		cout<<'1';
	else{
		cout<<"000";
		return 0;
	}
	if((tmp1<3 && tmp2<3) || (tmp1>2 && tmp2>2))
		cout<<'1';
	else{
		cout<<"00";
		return 0;
	}
	if((tmp1<3 && tmp2<3 && abs(tmp1-tmp2)==1) || (tmp1>2 && tmp2>2))
		cout<<'1';
	else
		cout<<'0';
	return 0;
}
