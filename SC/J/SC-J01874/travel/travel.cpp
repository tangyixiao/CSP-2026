#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>c1>>s1>>c2>>s2;
	string sn1,sn2;
	char st1,st2;
	sn1=s1[0]+s1[1];
	sn2=s2[0]+s2[1];
	st1=s1[2];
	st2=s2[2];
	if(c1!=c2) {
		cout<<"0000";
		return 0;
	}
	else{
		if(sn1!=sn2){
		cout<<"1000";
		return 0;
	}
	else
	{
		if((st1<='C'&&st2>'C')||(st1>'C'&&st2<='C')){
				cout<<"1100";
				return 0;
}	else{
		if(st1==(st2+1)||st1==(st2-1)){
			cout<<"1111";
			return 0;
		}
		else cout<<"1110";
	}}}
	return 0;
}